/*
 * crypto.c
 *
 *  Created on: 23/06/2023
 *  Author: Renato Cunha
 */
#include <stdio.h>
#include "_math.h"

int MATHCALL add(int a, int b) {
    printf("_math lib %s\n", MATHAPI_DEBUG);
    return (a + b);
}
