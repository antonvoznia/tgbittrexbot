# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /home/anton/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/anton/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anton/Development/MyWork/TGBittrixBot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/Development/MyWork/TGBittrixBot

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/home/anton/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/bin/cmake/linux/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/home/anton/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/bin/cmake/linux/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/anton/Development/MyWork/TGBittrixBot/CMakeFiles /home/anton/Development/MyWork/TGBittrixBot/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/anton/Development/MyWork/TGBittrixBot/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Currency

# Build rule for target.
Currency: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Currency
.PHONY : Currency

# fast build rule for target.
Currency/fast:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/build
.PHONY : Currency/fast

#=============================================================================
# Target rules for targets named tests

# Build rule for target.
tests: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 tests
.PHONY : tests

# fast build rule for target.
tests/fast:
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/build
.PHONY : tests/fast

api_request.o: api_request.cpp.o

.PHONY : api_request.o

# target to build an object file
api_request.cpp.o:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/api_request.cpp.o
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/api_request.cpp.o
.PHONY : api_request.cpp.o

api_request.i: api_request.cpp.i

.PHONY : api_request.i

# target to preprocess a source file
api_request.cpp.i:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/api_request.cpp.i
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/api_request.cpp.i
.PHONY : api_request.cpp.i

api_request.s: api_request.cpp.s

.PHONY : api_request.s

# target to generate assembly for a file
api_request.cpp.s:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/api_request.cpp.s
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/api_request.cpp.s
.PHONY : api_request.cpp.s

bitt_api.o: bitt_api.cpp.o

.PHONY : bitt_api.o

# target to build an object file
bitt_api.cpp.o:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/bitt_api.cpp.o
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/bitt_api.cpp.o
.PHONY : bitt_api.cpp.o

bitt_api.i: bitt_api.cpp.i

.PHONY : bitt_api.i

# target to preprocess a source file
bitt_api.cpp.i:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/bitt_api.cpp.i
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/bitt_api.cpp.i
.PHONY : bitt_api.cpp.i

bitt_api.s: bitt_api.cpp.s

.PHONY : bitt_api.s

# target to generate assembly for a file
bitt_api.cpp.s:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/bitt_api.cpp.s
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/bitt_api.cpp.s
.PHONY : bitt_api.cpp.s

local_db.o: local_db.cpp.o

.PHONY : local_db.o

# target to build an object file
local_db.cpp.o:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/local_db.cpp.o
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/local_db.cpp.o
.PHONY : local_db.cpp.o

local_db.i: local_db.cpp.i

.PHONY : local_db.i

# target to preprocess a source file
local_db.cpp.i:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/local_db.cpp.i
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/local_db.cpp.i
.PHONY : local_db.cpp.i

local_db.s: local_db.cpp.s

.PHONY : local_db.s

# target to generate assembly for a file
local_db.cpp.s:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/local_db.cpp.s
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/local_db.cpp.s
.PHONY : local_db.cpp.s

logs.o: logs.cpp.o

.PHONY : logs.o

# target to build an object file
logs.cpp.o:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/logs.cpp.o
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/logs.cpp.o
.PHONY : logs.cpp.o

logs.i: logs.cpp.i

.PHONY : logs.i

# target to preprocess a source file
logs.cpp.i:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/logs.cpp.i
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/logs.cpp.i
.PHONY : logs.cpp.i

logs.s: logs.cpp.s

.PHONY : logs.s

# target to generate assembly for a file
logs.cpp.s:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/logs.cpp.s
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/logs.cpp.s
.PHONY : logs.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/main.cpp.s
.PHONY : main.cpp.s

models/user.o: models/user.cpp.o

.PHONY : models/user.o

# target to build an object file
models/user.cpp.o:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/models/user.cpp.o
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/models/user.cpp.o
.PHONY : models/user.cpp.o

models/user.i: models/user.cpp.i

.PHONY : models/user.i

# target to preprocess a source file
models/user.cpp.i:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/models/user.cpp.i
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/models/user.cpp.i
.PHONY : models/user.cpp.i

models/user.s: models/user.cpp.s

.PHONY : models/user.s

# target to generate assembly for a file
models/user.cpp.s:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/models/user.cpp.s
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/models/user.cpp.s
.PHONY : models/user.cpp.s

pipe_db_api.o: pipe_db_api.cpp.o

.PHONY : pipe_db_api.o

# target to build an object file
pipe_db_api.cpp.o:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/pipe_db_api.cpp.o
.PHONY : pipe_db_api.cpp.o

pipe_db_api.i: pipe_db_api.cpp.i

.PHONY : pipe_db_api.i

# target to preprocess a source file
pipe_db_api.cpp.i:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/pipe_db_api.cpp.i
.PHONY : pipe_db_api.cpp.i

pipe_db_api.s: pipe_db_api.cpp.s

.PHONY : pipe_db_api.s

# target to generate assembly for a file
pipe_db_api.cpp.s:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/pipe_db_api.cpp.s
.PHONY : pipe_db_api.cpp.s

telegram_api.o: telegram_api.cpp.o

.PHONY : telegram_api.o

# target to build an object file
telegram_api.cpp.o:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/telegram_api.cpp.o
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/telegram_api.cpp.o
.PHONY : telegram_api.cpp.o

telegram_api.i: telegram_api.cpp.i

.PHONY : telegram_api.i

# target to preprocess a source file
telegram_api.cpp.i:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/telegram_api.cpp.i
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/telegram_api.cpp.i
.PHONY : telegram_api.cpp.i

telegram_api.s: telegram_api.cpp.s

.PHONY : telegram_api.s

# target to generate assembly for a file
telegram_api.cpp.s:
	$(MAKE) -f CMakeFiles/Currency.dir/build.make CMakeFiles/Currency.dir/telegram_api.cpp.s
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/telegram_api.cpp.s
.PHONY : telegram_api.cpp.s

tests/unit_tests.o: tests/unit_tests.cpp.o

.PHONY : tests/unit_tests.o

# target to build an object file
tests/unit_tests.cpp.o:
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/tests/unit_tests.cpp.o
.PHONY : tests/unit_tests.cpp.o

tests/unit_tests.i: tests/unit_tests.cpp.i

.PHONY : tests/unit_tests.i

# target to preprocess a source file
tests/unit_tests.cpp.i:
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/tests/unit_tests.cpp.i
.PHONY : tests/unit_tests.cpp.i

tests/unit_tests.s: tests/unit_tests.cpp.s

.PHONY : tests/unit_tests.s

# target to generate assembly for a file
tests/unit_tests.cpp.s:
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/tests/unit_tests.cpp.s
.PHONY : tests/unit_tests.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... Currency"
	@echo "... tests"
	@echo "... api_request.o"
	@echo "... api_request.i"
	@echo "... api_request.s"
	@echo "... bitt_api.o"
	@echo "... bitt_api.i"
	@echo "... bitt_api.s"
	@echo "... local_db.o"
	@echo "... local_db.i"
	@echo "... local_db.s"
	@echo "... logs.o"
	@echo "... logs.i"
	@echo "... logs.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... models/user.o"
	@echo "... models/user.i"
	@echo "... models/user.s"
	@echo "... pipe_db_api.o"
	@echo "... pipe_db_api.i"
	@echo "... pipe_db_api.s"
	@echo "... telegram_api.o"
	@echo "... telegram_api.i"
	@echo "... telegram_api.s"
	@echo "... tests/unit_tests.o"
	@echo "... tests/unit_tests.i"
	@echo "... tests/unit_tests.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

