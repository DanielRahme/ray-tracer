# Add the executable target
set(TargetName hello)

add_executable(${TargetName} main.cpp)

# Link with libraries from src/lib
target_link_libraries(${TargetName} PRIVATE lib)

target_compile_features(${TargetName} PRIVATE cxx_std_20)

target_link_options(${TargetName} PRIVATE -Wl,--gc-sections)

target_compile_options(${TargetName} 
PRIVATE
    -O3
    -Werror
    -Wall
    -Wextra
    -Wpedantic
    -fdata-sections
    -ffunction-sections
    -flto
    )

