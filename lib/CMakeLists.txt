# CMakeLists file for libraries

set(LibName lib)

add_library(${LibName} functions.cpp)

# Link with the header files in include folder
target_include_directories(${LibName} PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Set the language standard to C++20 for library
target_compile_features(${LibName} PRIVATE cxx_std_20)

# Compiler flags for library
target_compile_options(${LibName} 
PUBLIC
    -fdata-sections
    -ffunction-sections
PRIVATE
    -O3
    -Werror
    -Wall
    -Wextra
    -Wpedantic
    -Wshadow
    -Wdouble-promotion
    -Wconversion
    -fno-common
    )
