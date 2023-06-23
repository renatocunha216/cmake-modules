#
# Library crypto-lib
#

add_compile_definitions(CRYPTO_EXPORTS)
 
set(LIB_SOURCES
src/crypto.c
src/crypto-dll.c
)

add_library(${CRYPTO_LIB_NAME} SHARED ${LIB_SOURCES})
#target_include_directories (Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${CRYPTO_LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_custom_command(TARGET ${CRYPTO_LIB_NAME} POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E make_directory 
  ${CMAKE_SOURCE_DIR}/build-lib)

add_custom_command(TARGET ${CRYPTO_LIB_NAME} POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy
  ./lib${CRYPTO_LIB_NAME}.dll
  ${CMAKE_SOURCE_DIR}/build-lib)
