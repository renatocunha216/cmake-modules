#
# Library math-lib
#

add_compile_definitions(MATH_EXPORTS)
 
set(LIB_SOURCES
src/_math.c
src/math-dll.c
)

add_library(${MATH_LIB_NAME} SHARED ${LIB_SOURCES})
#target_include_directories (Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${MATH_LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_custom_command(TARGET ${MATH_LIB_NAME} POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E make_directory 
  ${CMAKE_SOURCE_DIR}/build-lib)

add_custom_command(TARGET ${MATH_LIB_NAME} POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy
  ./lib${MATH_LIB_NAME}.dll
  ${CMAKE_SOURCE_DIR}/build-lib)
