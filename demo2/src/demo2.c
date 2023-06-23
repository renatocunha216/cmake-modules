//============================================================================
// Name        : demo2.c
// Author      : Renato Cunha
// Version     :
// Copyright   : Your copyright notice
// Description : 
//============================================================================

#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <crypto.h>
#include <_math.h>

int main() {

	char paintText[50];
	char encryptText[50];
	char decryptText[50];

    printf("DEMO 2\n");

#if defined(_INFO_) || defined(_DEBUG_)	
    printf("INFO MODE\n");
#endif	
#if defined(_DEBUG_)
	printf("DEBUG MODE 1\n");
#endif	
#if defined(_TEST_)	
    printf("TEST MODE\n");
#endif	
    printf("exe %s %d\n", CRYPTOAPI_DEBUG, __LINE__);

    strcpy(paintText, "Plain text");

    encrypt(paintText, encryptText, strlen(paintText));

    printf("Plain text  : %s\n",  paintText);
    printf("Encrypt text: %s\n",  encryptText);

    decrypt(encryptText, decryptText, strlen(encryptText));

    printf("Decrypt text: %s\n",  decryptText);

    if (strcmp(paintText, decryptText) == 0) {
        printf("Equals!\n");
    }

    printf("Sum: %d\n",  add(1, 1));

	return 0;
}
