# Top-level CMake file
cmake_minimum_required(VERSION 3.14.0)

# The project name, version and languages
project(Hello 
    VERSION 1.0 
    LANGUAGES CXX
    )


### CMake modules path in folder cmake/. Enable find_package
list(APPEND CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

### Packages
find_package(doctest)

# Add the CMakeFiles in the other directories
add_subdirectory(lib)
add_subdirectory(src)

### Enable testing
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)

    if(BUILD_TESTING)
        add_subdirectory(test)
    endif()
endif()
