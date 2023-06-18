//============================================================================
// Name        : demo1.c
// Author      : Renato Cunha
// Version     :
// Copyright   : Your copyright notice
// Description : 
//============================================================================

#include <windows.h>
#include <stdio.h>
#include <crypto.h>

int main() {
	int mult = 100;
	int reais = 3;
 	int centavos;	
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
	centavos = mult * reais;	
    printf("Cents: %d\n", centavos);
    printf("Sum: %d\n",  add(mult, reais));
    printf("%s %d\n", ADDAPI_STR, __LINE__);
	
	return 0;
}
