/*
 * crypto.c
 *
 *  Created on: 14 de mai de 2022
 *  Author: Renato Cunha
 */
#include <stdio.h>
#include "crypto.h"

void CRYPTOCALL encrypt(char* plainText, char* cryptText, size_t length) {
    printf("crypto lib %s\n", CRYPTOAPI_DEBUG);
    for (int c = 0; c < length; c++) {
        *cryptText = *plainText + 1;
        plainText++;
        cryptText++;
    }
    *cryptText = '\0';
}

void CRYPTOCALL decrypt(char* cryptText, char* painText, size_t length) {
    printf("crypto lib %s\n", CRYPTOAPI_DEBUG);
    for (int c = 0; c < length; c++) {
        *painText = *cryptText - 1;
        cryptText++;
        painText++;
    }
    *painText = '\0';
}
