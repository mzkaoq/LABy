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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\THINK\Desktop\C++\LABy\thread

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\THINK\Desktop\C++\LABy\thread\build

# Include any dependencies generated for this target.
include CMakeFiles/thread.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/thread.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/thread.dir/flags.make

CMakeFiles/thread.dir/src/main.cpp.obj: CMakeFiles/thread.dir/flags.make
CMakeFiles/thread.dir/src/main.cpp.obj: CMakeFiles/thread.dir/includes_CXX.rsp
CMakeFiles/thread.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\THINK\Desktop\C++\LABy\thread\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/thread.dir/src/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\thread.dir\src\main.cpp.obj -c C:\Users\THINK\Desktop\C++\LABy\thread\src\main.cpp

CMakeFiles/thread.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/thread.dir/src/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\THINK\Desktop\C++\LABy\thread\src\main.cpp > CMakeFiles\thread.dir\src\main.cpp.i

CMakeFiles/thread.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/thread.dir/src/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\THINK\Desktop\C++\LABy\thread\src\main.cpp -o CMakeFiles\thread.dir\src\main.cpp.s

# Object files for target thread
thread_OBJECTS = \
"CMakeFiles/thread.dir/src/main.cpp.obj"

# External object files for target thread
thread_EXTERNAL_OBJECTS =

thread.exe: CMakeFiles/thread.dir/src/main.cpp.obj
thread.exe: CMakeFiles/thread.dir/build.make
thread.exe: CMakeFiles/thread.dir/linklibs.rsp
thread.exe: CMakeFiles/thread.dir/objects1.rsp
thread.exe: CMakeFiles/thread.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\THINK\Desktop\C++\LABy\thread\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable thread.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\thread.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/thread.dir/build: thread.exe

.PHONY : CMakeFiles/thread.dir/build

CMakeFiles/thread.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\thread.dir\cmake_clean.cmake
.PHONY : CMakeFiles/thread.dir/clean

CMakeFiles/thread.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\THINK\Desktop\C++\LABy\thread C:\Users\THINK\Desktop\C++\LABy\thread C:\Users\THINK\Desktop\C++\LABy\thread\build C:\Users\THINK\Desktop\C++\LABy\thread\build C:\Users\THINK\Desktop\C++\LABy\thread\build\CMakeFiles\thread.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/thread.dir/depend

