# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\beave\CLionProjects\FinalProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\beave\CLionProjects\FinalProject\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gameDemo.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gameDemo.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gameDemo.cpp.dir/flags.make

CMakeFiles/gameDemo.cpp.dir/Environment.cpp.obj: CMakeFiles/gameDemo.cpp.dir/flags.make
CMakeFiles/gameDemo.cpp.dir/Environment.cpp.obj: CMakeFiles/gameDemo.cpp.dir/includes_CXX.rsp
CMakeFiles/gameDemo.cpp.dir/Environment.cpp.obj: ../Environment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\beave\CLionProjects\FinalProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gameDemo.cpp.dir/Environment.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gameDemo.cpp.dir\Environment.cpp.obj -c C:\Users\beave\CLionProjects\FinalProject\Environment.cpp

CMakeFiles/gameDemo.cpp.dir/Environment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gameDemo.cpp.dir/Environment.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\beave\CLionProjects\FinalProject\Environment.cpp > CMakeFiles\gameDemo.cpp.dir\Environment.cpp.i

CMakeFiles/gameDemo.cpp.dir/Environment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gameDemo.cpp.dir/Environment.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\beave\CLionProjects\FinalProject\Environment.cpp -o CMakeFiles\gameDemo.cpp.dir\Environment.cpp.s

CMakeFiles/gameDemo.cpp.dir/Character.cpp.obj: CMakeFiles/gameDemo.cpp.dir/flags.make
CMakeFiles/gameDemo.cpp.dir/Character.cpp.obj: CMakeFiles/gameDemo.cpp.dir/includes_CXX.rsp
CMakeFiles/gameDemo.cpp.dir/Character.cpp.obj: ../Character.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\beave\CLionProjects\FinalProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gameDemo.cpp.dir/Character.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gameDemo.cpp.dir\Character.cpp.obj -c C:\Users\beave\CLionProjects\FinalProject\Character.cpp

CMakeFiles/gameDemo.cpp.dir/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gameDemo.cpp.dir/Character.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\beave\CLionProjects\FinalProject\Character.cpp > CMakeFiles\gameDemo.cpp.dir\Character.cpp.i

CMakeFiles/gameDemo.cpp.dir/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gameDemo.cpp.dir/Character.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\beave\CLionProjects\FinalProject\Character.cpp -o CMakeFiles\gameDemo.cpp.dir\Character.cpp.s

# Object files for target gameDemo.cpp
gameDemo_cpp_OBJECTS = \
"CMakeFiles/gameDemo.cpp.dir/Environment.cpp.obj" \
"CMakeFiles/gameDemo.cpp.dir/Character.cpp.obj"

# External object files for target gameDemo.cpp
gameDemo_cpp_EXTERNAL_OBJECTS =

gameDemo.cpp.exe: CMakeFiles/gameDemo.cpp.dir/Environment.cpp.obj
gameDemo.cpp.exe: CMakeFiles/gameDemo.cpp.dir/Character.cpp.obj
gameDemo.cpp.exe: CMakeFiles/gameDemo.cpp.dir/build.make
gameDemo.cpp.exe: CMakeFiles/gameDemo.cpp.dir/linklibs.rsp
gameDemo.cpp.exe: CMakeFiles/gameDemo.cpp.dir/objects1.rsp
gameDemo.cpp.exe: CMakeFiles/gameDemo.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\beave\CLionProjects\FinalProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable gameDemo.cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gameDemo.cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gameDemo.cpp.dir/build: gameDemo.cpp.exe

.PHONY : CMakeFiles/gameDemo.cpp.dir/build

CMakeFiles/gameDemo.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\gameDemo.cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/gameDemo.cpp.dir/clean

CMakeFiles/gameDemo.cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\beave\CLionProjects\FinalProject C:\Users\beave\CLionProjects\FinalProject C:\Users\beave\CLionProjects\FinalProject\cmake-build-debug C:\Users\beave\CLionProjects\FinalProject\cmake-build-debug C:\Users\beave\CLionProjects\FinalProject\cmake-build-debug\CMakeFiles\gameDemo.cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gameDemo.cpp.dir/depend

