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
CMAKE_SOURCE_DIR = /home/shook/work/training/CPP/cppTraning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shook/work/training/CPP/cppTraning/build/debug

# Include any dependencies generated for this target.
include src/examples/CMakeFiles/Person.dir/depend.make

# Include the progress variables for this target.
include src/examples/CMakeFiles/Person.dir/progress.make

# Include the compile flags for this target's objects.
include src/examples/CMakeFiles/Person.dir/flags.make

src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o: src/examples/CMakeFiles/Person.dir/flags.make
src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o: ../../src/examples/Class004/Person.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shook/work/training/CPP/cppTraning/build/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o"
	cd /home/shook/work/training/CPP/cppTraning/build/debug/src/examples && g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Person.dir/Class004/Person.cc.o -c /home/shook/work/training/CPP/cppTraning/src/examples/Class004/Person.cc

src/examples/CMakeFiles/Person.dir/Class004/Person.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Person.dir/Class004/Person.cc.i"
	cd /home/shook/work/training/CPP/cppTraning/build/debug/src/examples && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shook/work/training/CPP/cppTraning/src/examples/Class004/Person.cc > CMakeFiles/Person.dir/Class004/Person.cc.i

src/examples/CMakeFiles/Person.dir/Class004/Person.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Person.dir/Class004/Person.cc.s"
	cd /home/shook/work/training/CPP/cppTraning/build/debug/src/examples && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shook/work/training/CPP/cppTraning/src/examples/Class004/Person.cc -o CMakeFiles/Person.dir/Class004/Person.cc.s

src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o.requires:

.PHONY : src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o.requires

src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o.provides: src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o.requires
	$(MAKE) -f src/examples/CMakeFiles/Person.dir/build.make src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o.provides.build
.PHONY : src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o.provides

src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o.provides.build: src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o


# Object files for target Person
Person_OBJECTS = \
"CMakeFiles/Person.dir/Class004/Person.cc.o"

# External object files for target Person
Person_EXTERNAL_OBJECTS =

bin/Person: src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o
bin/Person: src/examples/CMakeFiles/Person.dir/build.make
bin/Person: src/examples/CMakeFiles/Person.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shook/work/training/CPP/cppTraning/build/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/Person"
	cd /home/shook/work/training/CPP/cppTraning/build/debug/src/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Person.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/examples/CMakeFiles/Person.dir/build: bin/Person

.PHONY : src/examples/CMakeFiles/Person.dir/build

src/examples/CMakeFiles/Person.dir/requires: src/examples/CMakeFiles/Person.dir/Class004/Person.cc.o.requires

.PHONY : src/examples/CMakeFiles/Person.dir/requires

src/examples/CMakeFiles/Person.dir/clean:
	cd /home/shook/work/training/CPP/cppTraning/build/debug/src/examples && $(CMAKE_COMMAND) -P CMakeFiles/Person.dir/cmake_clean.cmake
.PHONY : src/examples/CMakeFiles/Person.dir/clean

src/examples/CMakeFiles/Person.dir/depend:
	cd /home/shook/work/training/CPP/cppTraning/build/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shook/work/training/CPP/cppTraning /home/shook/work/training/CPP/cppTraning/src/examples /home/shook/work/training/CPP/cppTraning/build/debug /home/shook/work/training/CPP/cppTraning/build/debug/src/examples /home/shook/work/training/CPP/cppTraning/build/debug/src/examples/CMakeFiles/Person.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/examples/CMakeFiles/Person.dir/depend

