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
CMAKE_SOURCE_DIR = C:\Users\THINK\Desktop\C++\LABy\Snake-sfml

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\build

# Include any dependencies generated for this target.
include CMakeFiles/Snake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Snake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Snake.dir/flags.make

CMakeFiles/Snake.dir/src/main.cpp.obj: CMakeFiles/Snake.dir/flags.make
CMakeFiles/Snake.dir/src/main.cpp.obj: CMakeFiles/Snake.dir/includes_CXX.rsp
CMakeFiles/Snake.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Snake.dir/src/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Snake.dir\src\main.cpp.obj -c C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\src\main.cpp

CMakeFiles/Snake.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Snake.dir/src/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\src\main.cpp > CMakeFiles\Snake.dir\src\main.cpp.i

CMakeFiles/Snake.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Snake.dir/src/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\src\main.cpp -o CMakeFiles\Snake.dir\src\main.cpp.s

# Object files for target Snake
Snake_OBJECTS = \
"CMakeFiles/Snake.dir/src/main.cpp.obj"

# External object files for target Snake
Snake_EXTERNAL_OBJECTS =

Snake.exe: CMakeFiles/Snake.dir/src/main.cpp.obj
Snake.exe: CMakeFiles/Snake.dir/build.make
Snake.exe: ../libs/SFML-64/lib/libsfml-graphics-s-d.a
Snake.exe: ../libs/SFML-64/lib/libsfml-window-s-d.a
Snake.exe: ../libs/SFML-64/lib/libsfml-audio-s-d.a
Snake.exe: ../libs/SFML-64/lib/libsfml-system-s-d.a
Snake.exe: ../libs/SFML-64/lib/libfreetype.a
Snake.exe: ../libs/SFML-64/lib/libopenal32.a
Snake.exe: ../libs/SFML-64/lib/libvorbisfile.a
Snake.exe: ../libs/SFML-64/lib/libvorbisenc.a
Snake.exe: ../libs/SFML-64/lib/libvorbis.a
Snake.exe: ../libs/SFML-64/lib/libogg.a
Snake.exe: ../libs/SFML-64/lib/libFLAC.a
Snake.exe: CMakeFiles/Snake.dir/linklibs.rsp
Snake.exe: CMakeFiles/Snake.dir/objects1.rsp
Snake.exe: CMakeFiles/Snake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Snake.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Snake.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Snake.dir/build: Snake.exe

.PHONY : CMakeFiles/Snake.dir/build

CMakeFiles/Snake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Snake.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Snake.dir/clean

CMakeFiles/Snake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\THINK\Desktop\C++\LABy\Snake-sfml C:\Users\THINK\Desktop\C++\LABy\Snake-sfml C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\build C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\build C:\Users\THINK\Desktop\C++\LABy\Snake-sfml\build\CMakeFiles\Snake.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Snake.dir/depend

