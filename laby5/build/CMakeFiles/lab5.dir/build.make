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
CMAKE_SOURCE_DIR = C:\Users\THINK\Desktop\C++\LABy\laby5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\THINK\Desktop\C++\LABy\laby5\build

# Include any dependencies generated for this target.
include CMakeFiles/lab5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab5.dir/flags.make

CMakeFiles/lab5.dir/src/main.cpp.obj: CMakeFiles/lab5.dir/flags.make
CMakeFiles/lab5.dir/src/main.cpp.obj: CMakeFiles/lab5.dir/includes_CXX.rsp
CMakeFiles/lab5.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\THINK\Desktop\C++\LABy\laby5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab5.dir/src/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab5.dir\src\main.cpp.obj -c C:\Users\THINK\Desktop\C++\LABy\laby5\src\main.cpp

CMakeFiles/lab5.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab5.dir/src/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\THINK\Desktop\C++\LABy\laby5\src\main.cpp > CMakeFiles\lab5.dir\src\main.cpp.i

CMakeFiles/lab5.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab5.dir/src/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\THINK\Desktop\C++\LABy\laby5\src\main.cpp -o CMakeFiles\lab5.dir\src\main.cpp.s

CMakeFiles/lab5.dir/src/Matrix.cpp.obj: CMakeFiles/lab5.dir/flags.make
CMakeFiles/lab5.dir/src/Matrix.cpp.obj: CMakeFiles/lab5.dir/includes_CXX.rsp
CMakeFiles/lab5.dir/src/Matrix.cpp.obj: ../src/Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\THINK\Desktop\C++\LABy\laby5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab5.dir/src/Matrix.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab5.dir\src\Matrix.cpp.obj -c C:\Users\THINK\Desktop\C++\LABy\laby5\src\Matrix.cpp

CMakeFiles/lab5.dir/src/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab5.dir/src/Matrix.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\THINK\Desktop\C++\LABy\laby5\src\Matrix.cpp > CMakeFiles\lab5.dir\src\Matrix.cpp.i

CMakeFiles/lab5.dir/src/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab5.dir/src/Matrix.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\THINK\Desktop\C++\LABy\laby5\src\Matrix.cpp -o CMakeFiles\lab5.dir\src\Matrix.cpp.s

# Object files for target lab5
lab5_OBJECTS = \
"CMakeFiles/lab5.dir/src/main.cpp.obj" \
"CMakeFiles/lab5.dir/src/Matrix.cpp.obj"

# External object files for target lab5
lab5_EXTERNAL_OBJECTS =

lab5.exe: CMakeFiles/lab5.dir/src/main.cpp.obj
lab5.exe: CMakeFiles/lab5.dir/src/Matrix.cpp.obj
lab5.exe: CMakeFiles/lab5.dir/build.make
lab5.exe: CMakeFiles/lab5.dir/linklibs.rsp
lab5.exe: CMakeFiles/lab5.dir/objects1.rsp
lab5.exe: CMakeFiles/lab5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\THINK\Desktop\C++\LABy\laby5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab5.dir/build: lab5.exe

.PHONY : CMakeFiles/lab5.dir/build

CMakeFiles/lab5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab5.dir/clean

CMakeFiles/lab5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\THINK\Desktop\C++\LABy\laby5 C:\Users\THINK\Desktop\C++\LABy\laby5 C:\Users\THINK\Desktop\C++\LABy\laby5\build C:\Users\THINK\Desktop\C++\LABy\laby5\build C:\Users\THINK\Desktop\C++\LABy\laby5\build\CMakeFiles\lab5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab5.dir/depend

