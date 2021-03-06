# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gd/data/projects/netcompute/ncc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gd/data/projects/netcompute/ncc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/my_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/my_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_lib.dir/flags.make

token.cc: ../src/token.l
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/gd/data/projects/netcompute/ncc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[FLEX][lexer] Building scanner with flex 2.5.35"
	cd /Users/gd/data/projects/netcompute/ncc && /usr/bin/flex -o/Users/gd/data/projects/netcompute/ncc/cmake-build-debug/token.cc src/token.l

parser.cc: ../src/parser.y
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/gd/data/projects/netcompute/ncc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "[BISON][parser] Building parser with bison 2.3"
	cd /Users/gd/data/projects/netcompute/ncc && /usr/bin/bison -d -o /Users/gd/data/projects/netcompute/ncc/cmake-build-debug/parser.cc src/parser.y

parser.hh: parser.cc
	@$(CMAKE_COMMAND) -E touch_nocreate parser.hh

CMakeFiles/my_lib.dir/token.cc.o: CMakeFiles/my_lib.dir/flags.make
CMakeFiles/my_lib.dir/token.cc.o: token.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gd/data/projects/netcompute/ncc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/my_lib.dir/token.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_lib.dir/token.cc.o -c /Users/gd/data/projects/netcompute/ncc/cmake-build-debug/token.cc

CMakeFiles/my_lib.dir/token.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_lib.dir/token.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gd/data/projects/netcompute/ncc/cmake-build-debug/token.cc > CMakeFiles/my_lib.dir/token.cc.i

CMakeFiles/my_lib.dir/token.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_lib.dir/token.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gd/data/projects/netcompute/ncc/cmake-build-debug/token.cc -o CMakeFiles/my_lib.dir/token.cc.s

CMakeFiles/my_lib.dir/parser.cc.o: CMakeFiles/my_lib.dir/flags.make
CMakeFiles/my_lib.dir/parser.cc.o: parser.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gd/data/projects/netcompute/ncc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/my_lib.dir/parser.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_lib.dir/parser.cc.o -c /Users/gd/data/projects/netcompute/ncc/cmake-build-debug/parser.cc

CMakeFiles/my_lib.dir/parser.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_lib.dir/parser.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gd/data/projects/netcompute/ncc/cmake-build-debug/parser.cc > CMakeFiles/my_lib.dir/parser.cc.i

CMakeFiles/my_lib.dir/parser.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_lib.dir/parser.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gd/data/projects/netcompute/ncc/cmake-build-debug/parser.cc -o CMakeFiles/my_lib.dir/parser.cc.s

# Object files for target my_lib
my_lib_OBJECTS = \
"CMakeFiles/my_lib.dir/token.cc.o" \
"CMakeFiles/my_lib.dir/parser.cc.o"

# External object files for target my_lib
my_lib_EXTERNAL_OBJECTS =

libmy_lib.a: CMakeFiles/my_lib.dir/token.cc.o
libmy_lib.a: CMakeFiles/my_lib.dir/parser.cc.o
libmy_lib.a: CMakeFiles/my_lib.dir/build.make
libmy_lib.a: CMakeFiles/my_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gd/data/projects/netcompute/ncc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libmy_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/my_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_lib.dir/build: libmy_lib.a

.PHONY : CMakeFiles/my_lib.dir/build

CMakeFiles/my_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_lib.dir/clean

CMakeFiles/my_lib.dir/depend: token.cc
CMakeFiles/my_lib.dir/depend: parser.cc
CMakeFiles/my_lib.dir/depend: parser.hh
	cd /Users/gd/data/projects/netcompute/ncc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gd/data/projects/netcompute/ncc /Users/gd/data/projects/netcompute/ncc /Users/gd/data/projects/netcompute/ncc/cmake-build-debug /Users/gd/data/projects/netcompute/ncc/cmake-build-debug /Users/gd/data/projects/netcompute/ncc/cmake-build-debug/CMakeFiles/my_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_lib.dir/depend

