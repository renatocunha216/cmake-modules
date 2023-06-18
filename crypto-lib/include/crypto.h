/*
 * crypto.h
 *
 *  Created on: 14 de mai de 2022
 *      Author: renato
 */

#ifndef SRC_ADD_H_
#define SRC_ADD_H_

#ifdef _WIN32

  /* You should define ADD_EXPORTS *only* when building the DLL. */
  #ifdef ADD_EXPORTS
    #define ADDAPI __declspec(dllexport)
    #define ADDAPI_STR "__declspec(dllexport)"
  #else
    #define ADDAPI __declspec(dllimport)
    #define ADDAPI_STR "__declspec(dllimport)"

  #endif

  /* Define calling convention in one place, for convenience. */
  #define ADDCALL __cdecl

#else /* _WIN32 not defined. */

  /* Define with no value on non-Windows OSes. */
  #define ADDAPI
  #define ADDCALL

#endif

#ifdef __cplusplus
extern "C"
{
#endif

/* Declare our Add function using the above definitions. */
ADDAPI int ADDCALL add(int a, int b);

#ifdef __cplusplus
} // __cplusplus defined.
#endif

#endif /* SRC_ADD_H_ */
