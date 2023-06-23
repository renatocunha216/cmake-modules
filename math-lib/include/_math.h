/*
 * _math.h
 *
 *  Created on: 26/06/2023
 *  Author: renato cunha
 */

#ifndef SRC_MATH_H_
#define SRC_MATH_H_

#ifdef _WIN32

  /* You should define MATH_EXPORTS *only* when building the DLL. */
  #ifdef MATH_EXPORTS
    #define MATHAPI __declspec(dllexport)
    #define MATHAPI_DEBUG "__declspec(dllexport)"
  #else
    #define MATHAPI __declspec(dllimport)
    #define MATHAPI_DEBUG "__declspec(dllimport)"

  #endif

  /* Define calling convention in one place, for convenience. */
  #define MATHCALL __cdecl

#else /* _WIN32 not defined. */

  /* Define with no value on non-Windows OSes. */
  #define MATHAPI
  #define MATHCALL

#endif

#ifdef __cplusplus
extern "C"
{
#endif

/* Declare our Add function using the above definitions. */
MATHAPI int MATHCALL add(int a, int b);

#ifdef __cplusplus
} // __cplusplus defined.
#endif

#endif /* SRC_MATH_H_ */
