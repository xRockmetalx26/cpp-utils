# PROJECT NAME
project(app)

# CMAKE VERSION
cmake_minimum_required(VERSION "3.22.1")

# C FLAGS
set(CMAKE_C_FLAGS "-std=c18 -Wextra -Wall -Wpedantic -O3 -DNDEBUG")

# C++ FLAGS
set(CMAKE_CXX_FLAGS "-std=c++2a -Wextra -Wall -Wpedantic -O3 -DNDEBUG")

# INCLUDE PATHS
include_directories("include")

# HEADER FILES
FILE(GLOB_RECURSE H_FILES "include/*.h" "include/*.hpp")

# C SOURCE FILES
FILE(GLOB_RECURSE C_FILES "src/*.c")

# C++ SOURCE FILES
FILE(GLOB_RECURSE CPP_FILES "src/*.cpp" "src/*.cc")

# LIB FILES
FILE(GLOB_RECURSE LIB_FILES "lib/*.a")
FILE(GLOB_RECURSE LIB_FILES "lib/*.dll.a")

# RESOURCE FILES
set(GLOB_RECURSE RES_FILES "res/*.rc")

# EXECUTABLE NAME
set(APP "app")

# FILES OUTPUT PATHS
set(EXECUTABLE_OUTPUT_PATH "bin")
set(LIBRARY_OUTPUT_PATH "lib")

# LIBRARIES CONFIGURATION
#add_library(app_static STATIC SOURCE_FILES)
#add_library(app_shared SHARED SOURCE_FILES)

# EXECUTABLES CONFIGURATION
add_executable(${APP} ${C_FILES} ${CPP_FILES} ${RES_FILES} ${H_FILES})

# LINKED CONFIGURATION
target_link_libraries(${APP} ${LIB_FILES})

