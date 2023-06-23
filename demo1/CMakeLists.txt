#
# Aplcation demo1
#
 
set(SOURCES
src/demo1.c
)

add_executable(${DEMO1_NAME} ${SOURCES})
target_link_libraries(${DEMO1_NAME} LINK_PUBLIC ${MATH_LIB_NAME})
