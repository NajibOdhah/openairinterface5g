# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/updatefw.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/updatefw.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/updatefw.dir/flags.make

CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o: CMakeFiles/updatefw.dir/flags.make
CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o: /home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o   -c /home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c

CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c > CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.i

CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c -o CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.s

CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o.requires:

.PHONY : CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o.requires

CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o.provides: CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o.requires
	$(MAKE) -f CMakeFiles/updatefw.dir/build.make CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o.provides.build
.PHONY : CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o.provides

CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o.provides.build: CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o


# Object files for target updatefw
updatefw_OBJECTS = \
"CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o"

# External object files for target updatefw
updatefw_EXTERNAL_OBJECTS =

updatefw: CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o
updatefw: CMakeFiles/updatefw.dir/build.make
updatefw: CMakeFiles/updatefw.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable updatefw"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/updatefw.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/updatefw.dir/build: updatefw

.PHONY : CMakeFiles/updatefw.dir/build

CMakeFiles/updatefw.dir/requires: CMakeFiles/updatefw.dir/home/andrey/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OAI_FW_INIT/updatefw.c.o.requires

.PHONY : CMakeFiles/updatefw.dir/requires

CMakeFiles/updatefw.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/updatefw.dir/cmake_clean.cmake
.PHONY : CMakeFiles/updatefw.dir/clean

CMakeFiles/updatefw.dir/depend:
	cd /home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai /home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai /home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai/build /home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai/build /home/andrey/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/updatefw.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/updatefw.dir/depend

