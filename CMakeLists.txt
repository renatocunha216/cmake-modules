cmake_minimum_required(VERSION 3.23.1)
project(cmake-module-sample VERSION 1.2)

# Variable
set(MATH_LIB_NAME "math-lib")
set(CRYPTO_LIB_NAME "crypto-lib")
set(DEMO1_NAME "demo1")
set(DEMO2_NAME "demo2")


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(GCC_COVERAGE_COMPILE_FLAGS "-w")
add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})



add_compile_definitions(_WIN32)
#add_compile_definitions($<$<CONFIG:RELEASE>:_INFO_>)
#add_compile_definitions($<$<CONFIG:DEBUG>:_DEBUG_>)
#add_compile_definitions($<$<CONFIG:TESTE>:_DEBUG_>)
#add_compile_definitions($<$<CONFIG:TESTE>:_TESTE_>) 
add_compile_definitions(_INFO_)
#add_compile_definitions(_DEBUG_)

add_subdirectory(${MATH_LIB_NAME})
add_subdirectory(${CRYPTO_LIB_NAME})
add_subdirectory(${DEMO1_NAME})
add_subdirectory(${DEMO2_NAME})


