/*
 * add.c
 *
 *  Created on: 14 de mai de 2022
 *      Author: Renato Cunha
 */
#include <stdio.h>
#include "crypto.h"

int ADDCALL add(int a, int b)
{
  printf("1:");
  printf(ADDAPI_STR);
  printf("\n");
  return (a + b);
}
