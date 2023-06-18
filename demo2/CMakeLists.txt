#
# Aplication demo2
#
 
set(SOURCES
src/demo2.c
)

add_executable(${DEMO2_NAME} ${SOURCES})
target_link_libraries(${DEMO2_NAME} LINK_PUBLIC ${CRYPTO_LIB_NAME})
