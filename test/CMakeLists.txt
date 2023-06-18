# CMakeLists file for unit tests

# Run test writing "make test"

set(TestName my_test)
add_executable(${TestName} testmain.cpp)
target_compile_features(${TestName} PRIVATE cxx_std_20)
target_compile_options(${TestName} PRIVATE
    -O3
    -Werror
    -Wall
    -Wextra
    -Wpedantic
    )
target_link_libraries(${TestName} PRIVATE lib doctest::doctest)

add_test(NAME ${TestName} COMMAND ${TestName})
