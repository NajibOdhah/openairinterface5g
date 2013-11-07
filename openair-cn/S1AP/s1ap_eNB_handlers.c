/*******************************************************************************

  Eurecom OpenAirInterface
  Copyright(c) 1999 - 2012 Eurecom

  This program is free software; you can redistribute it and/or modify it
  under the terms and conditions of the GNU General Public License,
  version 2, as published by the Free Software Foundation.

  This program is distributed in the hope it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc.,
  51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.

  The full GNU General Public License is included in this distribution in
  the file called "COPYING".

  Contact Information
  Openair Admin: openair_admin@eurecom.fr
  Openair Tech : openair_tech@eurecom.fr
  Forums       : http://forums.eurecom.fr/openairinterface
  Address      : EURECOM, Campus SophiaTech, 450 Route des Chappes
                 06410 Biot FRANCE

*******************************************************************************/

/*! \file s1ap_eNB_handlers.c
 * \brief s1ap messages handlers for eNB part
 * \author Sebastien ROUX <sebastien.roux@eurecom.fr>
 * \date 2013
 * \version 0.1
 */

#include <stdint.h>

#include "intertask_interface.h"

#include "s1ap_common.h"
#include "s1ap_ies_defs.h"
// #include "s1ap_eNB.h"
#include "s1ap_eNB_defs.h"
#include "s1ap_eNB_handlers.h"
#include "s1ap_eNB_decoder.h"

#include "s1ap_eNB_ue_context.h"
#include "s1ap_eNB_trace.h"
#include "s1ap_eNB_nas_procedures.h"

#include "s1ap_eNB_default_values.h"

#include "conversions.h"

static
int s1ap_eNB_handle_s1_setup_response(uint32_t               assoc_id,
                                      uint32_t               stream,
                                      struct s1ap_message_s *message_p);
int s1ap_eNB_handle_s1_setup_failure(uint32_t               assoc_id,
                                     uint32_t               stream,
                                     struct s1ap_message_s *message_p);

static
int s1ap_eNB_handle_initial_context_request(uint32_t               assoc_id,
                                            uint32_t               stream,
                                            struct s1ap_message_s *message_p);

/* Handlers matrix. Only eNB related procedure present here */
s1ap_message_decoded_callback messages_callback[][3] = {
    { 0, 0, 0 }, /* HandoverPreparation */
    { 0, 0, 0 }, /* HandoverResourceAllocation */
    { 0, 0, 0 }, /* HandoverNotification */
    { 0, 0, 0 }, /* PathSwitchRequest */
    { 0, 0, 0 }, /* HandoverCancel */
    { 0, 0, 0 }, /* E_RABSetup */
    { 0, 0, 0 }, /* E_RABModify */
    { 0, 0, 0 }, /* E_RABRelease */
    { 0, 0, 0 }, /* E_RABReleaseIndication */
    { s1ap_eNB_handle_initial_context_request, 0, 0 }, /* InitialContextSetup */
    { 0, 0, 0 }, /* Paging */
    { s1ap_eNB_handle_nas_downlink, 0, 0 }, /* downlinkNASTransport */
    { 0, 0, 0 }, /* initialUEMessage */
    { 0, 0, 0 }, /* uplinkNASTransport */
    { 0, 0, 0 }, /* Reset */
    { 0, 0, 0 }, /* ErrorIndication */
    { 0, 0, 0 }, /* NASNonDeliveryIndication */
    { 0, s1ap_eNB_handle_s1_setup_response, s1ap_eNB_handle_s1_setup_failure }, /* S1Setup */
    { 0, 0, 0 }, /* UEContextReleaseRequest */
    { 0, 0, 0 }, /* DownlinkS1cdma2000tunneling */
    { 0, 0, 0 }, /* UplinkS1cdma2000tunneling */
    { 0, 0, 0 }, /* UEContextModification */
    { 0, 0, 0 }, /* UECapabilityInfoIndication */
    { 0, 0, 0 }, /* UEContextRelease */
    { 0, 0, 0 }, /* eNBStatusTransfer */
    { 0, 0, 0 }, /* MMEStatusTransfer */
    { s1ap_eNB_handle_deactivate_trace, 0, 0 }, /* DeactivateTrace */
    { s1ap_eNB_handle_trace_start, 0, 0 }, /* TraceStart */
    { 0, 0, 0 }, /* TraceFailureIndication */
    { 0, 0, 0 }, /* ENBConfigurationUpdate */
    { 0, 0, 0 }, /* MMEConfigurationUpdate */
    { 0, 0, 0 }, /* LocationReportingControl */
    { 0, 0, 0 }, /* LocationReportingFailureIndication */
    { 0, 0, 0 }, /* LocationReport */
    { 0, 0, 0 }, /* OverloadStart */
    { 0, 0, 0 }, /* OverloadStop */
    { 0, 0, 0 }, /* WriteReplaceWarning */
    { 0, 0, 0 }, /* eNBDirectInformationTransfer */
    { 0, 0, 0 }, /* MMEDirectInformationTransfer */
    { 0, 0, 0 }, /* PrivateMessage */
    { 0, 0, 0 }, /* eNBConfigurationTransfer */
    { 0, 0, 0 }, /* MMEConfigurationTransfer */
    { 0, 0, 0 }, /* CellTrafficTrace */
#if defined(UPDATE_RELEASE_9)
    { 0, 0, 0 }, /* Kill */
    { 0, 0, 0 }, /* DownlinkUEAssociatedLPPaTransport  */
    { 0, 0, 0 }, /* UplinkUEAssociatedLPPaTransport */
    { 0, 0, 0 }, /* DownlinkNonUEAssociatedLPPaTransport */
    { 0, 0, 0 }, /* UplinkNonUEAssociatedLPPaTransport */
#endif
};

static const char *direction2String[] = {
    "", /* Nothing */
    "Originating message", /* originating message */
    "Successfull outcome", /* successfull outcome */
    "UnSuccessfull outcome", /* successfull outcome */
};

int s1ap_eNB_handle_message(uint32_t assoc_id, int32_t stream,
                            const uint8_t * const data, const uint32_t data_length)
{
    struct s1ap_message_s message;

    DevAssert(data != NULL);

    memset(&message, 0, sizeof(struct s1ap_message_s));

    if (s1ap_eNB_decode_pdu(&message, data, data_length) < 0) {
        S1AP_ERROR("Failed to decode PDU\n");
        return -1;
    }
    /* Checking procedure Code and direction of message */
    if (message.procedureCode > sizeof(messages_callback) / (3 * sizeof(
                s1ap_message_decoded_callback))
            || (message.direction > S1AP_PDU_PR_unsuccessfulOutcome)) {
        S1AP_ERROR("[SCTP %d] Either procedureCode %d or direction %d exceed expected\n",
                   assoc_id, message.procedureCode, message.direction);
        return -1;
    }
    /* No handler present.
     * This can mean not implemented or no procedure for eNB (wrong direction).
     */
    if (messages_callback[message.procedureCode][message.direction-1] == NULL) {
        S1AP_ERROR("[SCTP %d] No handler for procedureCode %d in %s\n",
                   assoc_id, message.procedureCode,
                   direction2String[message.direction]);
        return -1;
    }

    /* Calling the right handler */
    return (*messages_callback[message.procedureCode][message.direction-1])
        (assoc_id, stream, &message);
}

int s1ap_eNB_handle_s1_setup_failure(uint32_t               assoc_id,
                                     uint32_t               stream,
                                     struct s1ap_message_s *message_p)
{
    /* S1 Setup Failure == Non UE-related procedure -> stream 0 */
    if (stream != 0) {
        S1AP_WARN("[SCTP %d] Received s1 setup failure on stream != 0 (%d)\n",
                  assoc_id, stream);
    }
    S1AP_DEBUG("Received s1 setup failure for MME... please check your parameters\n");

    return 0;
}

// int s1ap_eNB_handle_s1_setup_response(eNB_mme_desc_t *eNB_desc_p,
//                                       sctp_queue_item_t *packet_p,
//                                       struct s1ap_message_s *message_p)
static
int s1ap_eNB_handle_s1_setup_response(uint32_t               assoc_id,
                                      uint32_t               stream,
                                      struct s1ap_message_s *message_p)
{
    S1SetupResponseIEs_t *s1SetupResponse_p;
    s1ap_eNB_mme_data_t  *mme_desc_p;
    int i;

    DevAssert(message_p != NULL);

    s1SetupResponse_p = &message_p->msg.s1SetupResponseIEs;

    /* S1 Setup Response == Non UE-related procedure -> stream 0 */
    if (stream != 0) {
        S1AP_ERROR("[SCTP %d] Received s1 setup response on stream != 0 (%d)\n",
                   assoc_id, stream);
        return -1;
    }

    if ((mme_desc_p = s1ap_eNB_get_MME(NULL, assoc_id, 0)) == NULL) {
        S1AP_ERROR("[SCTP %d] Received S1 setup response for non existing "
                   "MME context\n", assoc_id);
        return -1;
    }

    /* The list of served gummei can contain at most 8 elements.
     * LTE related gummei is the first element in the list, i.e with an id of 0.
     */
    DevAssert(s1SetupResponse_p->servedGUMMEIs.list.count == 1);

    for (i = 0; i < s1SetupResponse_p->servedGUMMEIs.list.count; i++) {
        struct ServedGUMMEIsItem *gummei_item_p;
        struct served_gummei_s   *new_gummei_p;
        int j;

        gummei_item_p = (struct ServedGUMMEIsItem *)
                        s1SetupResponse_p->servedGUMMEIs.list.array[i];
        new_gummei_p = calloc(1, sizeof(struct served_gummei_s));

        STAILQ_INIT(&new_gummei_p->served_plmns);
        STAILQ_INIT(&new_gummei_p->served_group_ids);
        STAILQ_INIT(&new_gummei_p->mme_codes);

        for (j = 0; j < gummei_item_p->servedPLMNs.list.count; j++) {
            PLMNidentity_t *plmn_identity_p;
            struct plmn_identity_s *new_plmn_identity_p;

            plmn_identity_p = gummei_item_p->servedPLMNs.list.array[i];
            new_plmn_identity_p = calloc(1, sizeof(struct plmn_identity_s));
            TBCD_TO_MCC_MNC(plmn_identity_p, new_plmn_identity_p->mcc,
                            new_plmn_identity_p->mnc);
            STAILQ_INSERT_TAIL(&new_gummei_p->served_plmns, new_plmn_identity_p, next);
            new_gummei_p->nb_served_plmns++;
        }
        for (j = 0; j < gummei_item_p->servedGroupIDs.list.count; j++) {
            MME_Group_ID_t           *mme_group_id_p;
            struct served_group_id_s *new_group_id_p;

            mme_group_id_p = gummei_item_p->servedGroupIDs.list.array[i];
            new_group_id_p = calloc(1, sizeof(struct served_group_id_s));
            OCTET_STRING_TO_INT16(mme_group_id_p, new_group_id_p->mme_group_id);
            STAILQ_INSERT_TAIL(&new_gummei_p->served_group_ids, new_group_id_p, next);
            new_gummei_p->nb_group_id++;
        }
        for (j = 0; j < gummei_item_p->servedMMECs.list.count; j++) {
            MME_Code_t        *mme_code_p;
            struct mme_code_s *new_mme_code_p;

            mme_code_p = gummei_item_p->servedMMECs.list.array[i];
            new_mme_code_p = calloc(1, sizeof(struct mme_code_s));

            OCTET_STRING_TO_INT8(mme_code_p, new_mme_code_p->mme_code);
            STAILQ_INSERT_TAIL(&new_gummei_p->mme_codes, new_mme_code_p, next);
            new_gummei_p->nb_mme_code++;
        }
        STAILQ_INSERT_TAIL(&mme_desc_p->served_gummei, new_gummei_p, next);
    }
    /* Free contents of the list */
    ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_ServedGUMMEIs,
                                  (void *)&s1SetupResponse_p->servedGUMMEIs);
    /* Set the capacity of this MME */
    mme_desc_p->relative_mme_capacity = s1SetupResponse_p->relativeMMECapacity;
    /* Optionaly set the mme name */
    if (s1SetupResponse_p->presenceMask & S1SETUPRESPONSEIES_MMENAME_PRESENT) {
        mme_desc_p->mme_name = calloc(s1SetupResponse_p->mmEname.size + 1, sizeof(char));
        memcpy(mme_desc_p->mme_name, s1SetupResponse_p->mmEname.buf,
               s1SetupResponse_p->mmEname.size);
        /* Convert the mme name to a printable string */
        mme_desc_p->mme_name[s1SetupResponse_p->mmEname.size] = '\0';
    }
    /* The association is now ready as eNB and MME know parameters of each other.
     * Mark the association as UP to enable UE contexts creation.
     */
    mme_desc_p->state = S1AP_ENB_STATE_CONNECTED;

//     /* We call back our self
//      * -> generate a dummy initial UE message
//      */
//     {
//         extern int s1ap_eNB_handle_api_req(eNB_mme_desc_t     *eNB_desc_p,
//                                            s1ap_rrc_api_req_t *api_req_p);
//         s1ap_rrc_api_req_t api_req;
//         s1ap_nas_first_req_t *nas_req_p;
// 
//         memset(&api_req, 0, sizeof(s1ap_rrc_api_req_t));
// 
//         nas_req_p = &api_req.msg.first_nas_req;
//         api_req.api_req = S1AP_API_NAS_FIRST_REQ;
// 
//         nas_req_p->rnti = 0xC03A;
//         nas_req_p->establishment_cause = RRC_CAUSE_MO_DATA;
//         nas_req_p->ue_identity.present = GUMMEI_PROVIDED;
// 
//         nas_req_p->ue_identity.identity.gummei.mcc = 208;
//         nas_req_p->ue_identity.identity.gummei.mnc = 34;
//         nas_req_p->ue_identity.identity.gummei.mme_code = 0;
//         nas_req_p->ue_identity.identity.gummei.mme_group_id = 0;
// 
//         /* NAS Attach request with IMSI */
//         uint8_t nas_attach_req_imsi[] =
//         {
//             0x07, 0x41,
//             /* EPS Mobile identity = IMSI */
//             0x71, 0x08, 0x29, 0x80, 0x43, 0x21, 0x43, 0x65, 0x87,
//             0xF9,
//             /* End of EPS Mobile Identity */
//             0x02, 0xE0, 0xE0, 0x00, 0x20, 0x02, 0x03,
//             0xD0, 0x11, 0x27, 0x1A, 0x80, 0x80, 0x21, 0x10, 0x01, 0x00, 0x00,
//             0x10, 0x81, 0x06, 0x00, 0x00, 0x00, 0x00, 0x83, 0x06, 0x00, 0x00,
//             0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x0A, 0x00, 0x52, 0x12, 0xF2,
//             0x01, 0x27, 0x11,
//         };
// 
//         /* NAS Attach request with GUTI */
//         uint8_t nas_attach_req_guti[] =
//         {
//             0x07, 0x41,
//             /* EPS Mobile identity = IMSI */
//             0x71, 0x0B, 0xF6, 0x12, 0xF2, 0x01, 0x80, 0x00, 0x01, 0xE0, 0x00,
//             0xDA, 0x1F,
//             /* End of EPS Mobile Identity */
//             0x02, 0xE0, 0xE0, 0x00, 0x20, 0x02, 0x03,
//             0xD0, 0x11, 0x27, 0x1A, 0x80, 0x80, 0x21, 0x10, 0x01, 0x00, 0x00,
//             0x10, 0x81, 0x06, 0x00, 0x00, 0x00, 0x00, 0x83, 0x06, 0x00, 0x00,
//             0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x0A, 0x00, 0x52, 0x12, 0xF2,
//             0x01, 0x27, 0x11,
//         };
// 
//         nas_req_p->nas_pdu.buffer = nas_attach_req_guti;
//         nas_req_p->nas_pdu.length = sizeof(nas_attach_req_guti);
// 
//         s1ap_eNB_handle_api_req(eNB_desc_p, &api_req);
//     }

    return 0;
}

// int s1ap_eNB_handle_initial_context_request(eNB_mme_desc_t *eNB_desc_p,
//         sctp_queue_item_t *packet_p,
//         struct s1ap_message_s *message_p)
static
int s1ap_eNB_handle_initial_context_request(uint32_t               assoc_id,
                                            uint32_t               stream,
                                            struct s1ap_message_s *message_p)
{
    s1ap_eNB_mme_data_t   *mme_desc_p;
    s1ap_eNB_ue_context_t *ue_desc_p;

    InitialContextSetupRequestIEs_t *initialContextSetupRequest_p;

//     DevAssert(eNB_desc_p != NULL);
    DevAssert(message_p != NULL);

    initialContextSetupRequest_p = &message_p->msg.initialContextSetupRequestIEs;

    /* Initial context request = UE-related procedure -> stream != 0 */
    if (stream == 0) {
        S1AP_ERROR("[SCTP %d] Received UE-related procedure on stream = 0 (%d)\n",
                   assoc_id, stream);
        return -1;
    }

//     if ((mme_desc_p = s1ap_eNB_get_MME(eNB_desc_p, assoc_id)) == NULL) {
//         S1AP_ERROR("[SCTP %d] Received initial context setup request for non "
//                    "existing MME context\n", packet_p->assoc_id);
//         return -1;
//     }
//     if ((ue_desc_p = s1ap_eNB_get_ue_context(eNB_desc_p,
//                      initialContextSetupRequest_p->eNB_UE_S1AP_ID)) == NULL) {
//         S1AP_ERROR("[SCTP %d] Received initial context setup request for non "
//                    "existing UE context\n", packet_p->assoc_id);
//         return -1;
//     }

    ue_desc_p->mme_ue_s1ap_id = initialContextSetupRequest_p->mme_ue_s1ap_id;

//     {
//         int i;
// 
//         extern int s1ap_eNB_handle_api_req(eNB_mme_desc_t     *eNB_desc_p,
//                                            s1ap_rrc_api_req_t *api_req_p);
// 
//         s1ap_rrc_api_req_t api_req;
//         s1ap_initial_ctxt_setup_resp_t *initial_ctxt_resp_p;
// 
//         memset(&api_req, 0, sizeof(s1ap_rrc_api_req_t));
// 
//         initial_ctxt_resp_p = &api_req.msg.initial_ctxt_resp;
//         api_req.api_req = S1AP_API_INITIAL_CONTEXT_SETUP_RESP;
// 
//         initial_ctxt_resp_p->eNB_ue_s1ap_id = ue_desc_p->eNB_ue_s1ap_id;
//         initial_ctxt_resp_p->e_rabs_failed = 0;
//         initial_ctxt_resp_p->nb_of_e_rabs
//         = initialContextSetupRequest_p->e_RABToBeSetupListCtxtSUReq.e_RABToBeSetupItemCtxtSUReq.count;
//         for (i = 0; i < initialContextSetupRequest_p->e_RABToBeSetupListCtxtSUReq.e_RABToBeSetupItemCtxtSUReq.count; i++)
//         {
//             struct E_RABToBeSetupItemCtxtSUReq_s *item;
//             item = (struct E_RABToBeSetupItemCtxtSUReq_s *)initialContextSetupRequest_p->e_RABToBeSetupListCtxtSUReq.e_RABToBeSetupItemCtxtSUReq.array[i];
//             initial_ctxt_resp_p->e_rabs = realloc(initial_ctxt_resp_p->e_rabs, i * sizeof(e_rab_setup_t));
//             initial_ctxt_resp_p->e_rabs[i].e_rab_id = 5;
// 
//         }
// 
//         s1ap_eNB_handle_api_req(eNB_desc_p, &api_req);
//     }

    return 0;
}
