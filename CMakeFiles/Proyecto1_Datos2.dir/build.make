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
CMAKE_SOURCE_DIR = /home/cris/CLionProjects/Proyecto1_Datos2.

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cris/CLionProjects/Proyecto1_Datos2.

# Include any dependencies generated for this target.
include CMakeFiles/Proyecto1_Datos2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Proyecto1_Datos2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proyecto1_Datos2.dir/flags.make

ui_ide_cfactorial.h: forms/ide_cfactorial.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cris/CLionProjects/Proyecto1_Datos2./CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_ide_cfactorial.h"
	/home/cris/Qt5.7.0/5.7/gcc_64/bin/uic -o /home/cris/CLionProjects/Proyecto1_Datos2./ui_ide_cfactorial.h /home/cris/CLionProjects/Proyecto1_Datos2./forms/ide_cfactorial.ui

CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o: CMakeFiles/Proyecto1_Datos2.dir/flags.make
CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cris/CLionProjects/Proyecto1_Datos2./CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o -c /home/cris/CLionProjects/Proyecto1_Datos2./main.cpp

CMakeFiles/Proyecto1_Datos2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto1_Datos2.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cris/CLionProjects/Proyecto1_Datos2./main.cpp > CMakeFiles/Proyecto1_Datos2.dir/main.cpp.i

CMakeFiles/Proyecto1_Datos2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto1_Datos2.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cris/CLionProjects/Proyecto1_Datos2./main.cpp -o CMakeFiles/Proyecto1_Datos2.dir/main.cpp.s

CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o.requires

CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o.provides: CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Proyecto1_Datos2.dir/build.make CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o.provides

CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o.provides.build: CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o


CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o: CMakeFiles/Proyecto1_Datos2.dir/flags.make
CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o: forms/ide_cfactorial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cris/CLionProjects/Proyecto1_Datos2./CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o -c /home/cris/CLionProjects/Proyecto1_Datos2./forms/ide_cfactorial.cpp

CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cris/CLionProjects/Proyecto1_Datos2./forms/ide_cfactorial.cpp > CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.i

CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cris/CLionProjects/Proyecto1_Datos2./forms/ide_cfactorial.cpp -o CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.s

CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o.requires:

.PHONY : CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o.requires

CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o.provides: CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o.requires
	$(MAKE) -f CMakeFiles/Proyecto1_Datos2.dir/build.make CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o.provides.build
.PHONY : CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o.provides

CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o.provides.build: CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o


CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o: CMakeFiles/Proyecto1_Datos2.dir/flags.make
CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o: Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cris/CLionProjects/Proyecto1_Datos2./CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o -c /home/cris/CLionProjects/Proyecto1_Datos2./Client.cpp

CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cris/CLionProjects/Proyecto1_Datos2./Client.cpp > CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.i

CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cris/CLionProjects/Proyecto1_Datos2./Client.cpp -o CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.s

CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o.requires:

.PHONY : CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o.requires

CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o.provides: CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o.requires
	$(MAKE) -f CMakeFiles/Proyecto1_Datos2.dir/build.make CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o.provides.build
.PHONY : CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o.provides

CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o.provides.build: CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o


CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o: CMakeFiles/Proyecto1_Datos2.dir/flags.make
CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o: Proyecto1_Datos2_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cris/CLionProjects/Proyecto1_Datos2./CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o -c /home/cris/CLionProjects/Proyecto1_Datos2./Proyecto1_Datos2_automoc.cpp

CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cris/CLionProjects/Proyecto1_Datos2./Proyecto1_Datos2_automoc.cpp > CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.i

CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cris/CLionProjects/Proyecto1_Datos2./Proyecto1_Datos2_automoc.cpp -o CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.s

CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o.requires:

.PHONY : CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o.requires

CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o.provides: CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o.requires
	$(MAKE) -f CMakeFiles/Proyecto1_Datos2.dir/build.make CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o.provides.build
.PHONY : CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o.provides

CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o.provides.build: CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o


# Object files for target Proyecto1_Datos2
Proyecto1_Datos2_OBJECTS = \
"CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o" \
"CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o" \
"CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o" \
"CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o"

# External object files for target Proyecto1_Datos2
Proyecto1_Datos2_EXTERNAL_OBJECTS =

Proyecto1_Datos2: CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o
Proyecto1_Datos2: CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o
Proyecto1_Datos2: CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o
Proyecto1_Datos2: CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o
Proyecto1_Datos2: CMakeFiles/Proyecto1_Datos2.dir/build.make
Proyecto1_Datos2: /home/cris/Qt5.7.0/5.7/gcc_64/lib/libQt5Widgets.so.5.7.0
Proyecto1_Datos2: /home/cris/Qt5.7.0/5.7/gcc_64/lib/libQt5Network.so.5.7.0
Proyecto1_Datos2: /home/cris/Qt5.7.0/5.7/gcc_64/lib/libQt5Gui.so.5.7.0
Proyecto1_Datos2: /home/cris/Qt5.7.0/5.7/gcc_64/lib/libQt5Core.so.5.7.0
Proyecto1_Datos2: CMakeFiles/Proyecto1_Datos2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cris/CLionProjects/Proyecto1_Datos2./CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Proyecto1_Datos2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Proyecto1_Datos2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proyecto1_Datos2.dir/build: Proyecto1_Datos2

.PHONY : CMakeFiles/Proyecto1_Datos2.dir/build

CMakeFiles/Proyecto1_Datos2.dir/requires: CMakeFiles/Proyecto1_Datos2.dir/main.cpp.o.requires
CMakeFiles/Proyecto1_Datos2.dir/requires: CMakeFiles/Proyecto1_Datos2.dir/forms/ide_cfactorial.cpp.o.requires
CMakeFiles/Proyecto1_Datos2.dir/requires: CMakeFiles/Proyecto1_Datos2.dir/Client.cpp.o.requires
CMakeFiles/Proyecto1_Datos2.dir/requires: CMakeFiles/Proyecto1_Datos2.dir/Proyecto1_Datos2_automoc.cpp.o.requires

.PHONY : CMakeFiles/Proyecto1_Datos2.dir/requires

CMakeFiles/Proyecto1_Datos2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Proyecto1_Datos2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Proyecto1_Datos2.dir/clean

CMakeFiles/Proyecto1_Datos2.dir/depend: ui_ide_cfactorial.h
	cd /home/cris/CLionProjects/Proyecto1_Datos2. && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cris/CLionProjects/Proyecto1_Datos2. /home/cris/CLionProjects/Proyecto1_Datos2. /home/cris/CLionProjects/Proyecto1_Datos2. /home/cris/CLionProjects/Proyecto1_Datos2. /home/cris/CLionProjects/Proyecto1_Datos2./CMakeFiles/Proyecto1_Datos2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proyecto1_Datos2.dir/depend
