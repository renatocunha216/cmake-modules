//============================================================================
// Name        : demo1.c
// Author      : Renato Cunha
// Version     :
// Copyright   : Your copyright notice
// Description : 
//============================================================================

#include <windows.h>
#include <stdio.h>
#include <_math.h>

int main() {
	int value1 = 100;
	int value2 = 3;

    printf("DEMO 1\n");

#if defined(_INFO_) || defined(_DEBUG_)	
    printf("INFO MODE\n");
#endif	
#if defined(_DEBUG_)
	printf("DEBUG MODE 1\n");
#endif	
#if defined(_TEST_)	
    printf("TEST MODE\n");
#endif	

    printf("exe %s %d\n", MATHAPI_DEBUG, __LINE__);
    printf("Sum: %d\n",  add(value1, value2));
	
	return 0;
}
