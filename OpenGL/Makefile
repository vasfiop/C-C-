#
# 'make'        build executable file 'main'
# 'make clean'  removes all .o and executable files
#

# define the Cpp compiler to use
CXX = g++

# define any compile-time flags
CXXFLAGS	:= -std=c++17 -Wall -Wextra -g

# define library paths in addition to /usr/lib
#   if I wanted to include libraries not in /usr/lib I'd specify
#   their path using -Lpath, something like:
LFLAGS =

# define output directory
OUTPUT	:= output

# define source directory
SRC		:= src/$(dir) #// 传递 var 变量定义执行文件目录
CLEAN_SRC		:= src\$(dir)\*.o #// 删除所有.o文件

# define include directory
INCLUDE	:= include

# define lib directory
LIB		:= lib
Libraries := -lglfw3dll -lopengl32 -lglew32 
# -lsoil2-debug

ifeq ($(OS),Windows_NT)
MAIN	:= main.exe
SOURCEDIRS	:= $(SRC)
INCLUDEDIRS	:= $(INCLUDE)
LIBDIRS		:= $(LIB)
FIXPATH = $(subst /,\,$1)
RM			:= del /q /f
MD	:= mkdir
else
MAIN	:= main
SOURCEDIRS	:= $(shell find $(SRC) -type d)
INCLUDEDIRS	:= $(shell find $(INCLUDE) -type d)
LIBDIRS		:= $(shell find $(LIB) -type d)
FIXPATH = $1
RM = rm -f
MD	:= mkdir -p
endif

# define any directories containing header files other than /usr/include
INCLUDES	:= $(patsubst %,-I%, $(INCLUDEDIRS:%/=%))

# define the C libs
LIBS		:= $(patsubst %,-L%, $(LIBDIRS:%/=%))

# define the C source files
SOURCES		:= $(wildcard $(patsubst %,%/*.cpp, $(SOURCEDIRS)))

# define the C object files 
OBJECTS		:= $(SOURCES:.cpp=.o)

#
# The following part of the makefile is generic; it can be used to 
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'
#

OUTPUTMAIN	:= $(call FIXPATH,$(OUTPUT)/$(MAIN))

all: $(OUTPUT) $(MAIN)
	@echo Executing 'all' complete!

$(OUTPUT):
	$(MD) $(OUTPUT)

$(MAIN): $(OBJECTS) 
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(OUTPUTMAIN) $(OBJECTS) $(LFLAGS) $(LIBS) $(Libraries) 

# this is a suffix replacement rule for building .o's from .c's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file) 
# (see the gnu make manual section about automatic variables)
.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $<  -o $@

.PHONY: clean
clean:
	$(RM) $(OUTPUTMAIN)
	$(RM) $(call FIXPATH,$(OBJECTS))
	@echo Cleanup complete!

run: all
	./$(OUTPUTMAIN)
	@echo Executing 'run: all' complete!

# 下面是SOIL2的makefile

# ifndef config
#   config=debug_x86_64
# endif

# ifndef verbose
#   SILENT = @
# endif

# ifeq ($(config),debug_x86_64)
#   soil2_static_lib_config = debug_x86_64
#   soil2_shared_lib_config = debug_x86_64
#   soil2_test_config = debug_x86_64
#   soil2_perf_test_config = debug_x86_64

# else ifeq ($(config),debug_x86)
#   soil2_static_lib_config = debug_x86
#   soil2_shared_lib_config = debug_x86
#   soil2_test_config = debug_x86
#   soil2_perf_test_config = debug_x86

# else ifeq ($(config),release_x86_64)
#   soil2_static_lib_config = release_x86_64
#   soil2_shared_lib_config = release_x86_64
#   soil2_test_config = release_x86_64
#   soil2_perf_test_config = release_x86_64

# else ifeq ($(config),release_x86)
#   soil2_static_lib_config = release_x86
#   soil2_shared_lib_config = release_x86
#   soil2_test_config = release_x86
#   soil2_perf_test_config = release_x86

# else
#   $(error "invalid configuration $(config)")
# endif

# PROJECTS := soil2-static-lib soil2-shared-lib soil2-test soil2-perf-test

# .PHONY: all clean help $(PROJECTS) 

# all: $(PROJECTS)

# soil2-static-lib:
# ifneq (,$(soil2_static_lib_config))
# 	@echo "==== Building soil2-static-lib ($(soil2_static_lib_config)) ===="
# 	@echo "这一行是make${MAKE}"
# 	@${MAKE} --no-print-directory -C . -f soil2-static-lib.make config=$(soil2_static_lib_config)
# endif

# soil2-shared-lib:
# ifneq (,$(soil2_shared_lib_config))
# 	@echo "==== Building soil2-shared-lib ($(soil2_shared_lib_config)) ===="
# 	@${MAKE} --no-print-directory -C . -f soil2-shared-lib.make config=$(soil2_shared_lib_config)
# endif

# soil2-test: soil2-static-lib
# ifneq (,$(soil2_test_config))
# 	@echo "==== Building soil2-test ($(soil2_test_config)) ===="
# 	@${MAKE} --no-print-directory -C . -f soil2-test.make config=$(soil2_test_config)
# endif

# soil2-perf-test: soil2-static-lib
# ifneq (,$(soil2_perf_test_config))
# 	@echo "==== Building soil2-perf-test ($(soil2_perf_test_config)) ===="
# 	@${MAKE} --no-print-directory -C . -f soil2-perf-test.make config=$(soil2_perf_test_config)
# endif

# clean:
# 	@${MAKE} --no-print-directory -C . -f soil2-static-lib.make clean
# 	@${MAKE} --no-print-directory -C . -f soil2-shared-lib.make clean
# 	@${MAKE} --no-print-directory -C . -f soil2-test.make clean
# 	@${MAKE} --no-print-directory -C . -f soil2-perf-test.make clean

# help:
# 	@echo "Usage: make [config=name] [target]"
# 	@echo ""
# 	@echo "CONFIGURATIONS:"
# 	@echo "  debug_x86_64"
# 	@echo "  debug_x86"
# 	@echo "  release_x86_64"
# 	@echo "  release_x86"
# 	@echo ""
# 	@echo "TARGETS:"
# 	@echo "   all (default)"
# 	@echo "   clean"
# 	@echo "   soil2-static-lib"
# 	@echo "   soil2-shared-lib"
# 	@echo "   soil2-test"
# 	@echo "   soil2-perf-test"
# 	@echo ""
# 	@echo "For more information, see https://github.com/premake/premake-core/wiki"