/*
 * crypto.h
 *
 *  Created on: 14 de mai de 2022
 *  Author: renato cunha
 */

#ifndef SRC_CRYPTO_H_
#define SRC_CRYPTO_H_

#ifdef _WIN32

  /* You should define CRYPTO_EXPORTS *only* when building the DLL. */
  #ifdef CRYPTO_EXPORTS
    #define CRYPTOAPI __declspec(dllexport)
    #define CRYPTOAPI_DEBUG "__declspec(dllexport)"
  #else
    #define CRYPTOAPI __declspec(dllimport)
    #define CRYPTOAPI_DEBUG "__declspec(dllimport)"

  #endif

  /* Define calling convention in one place, for convenience. */
  #define CRYPTOCALL __cdecl

#else /* _WIN32 not defined. */

  /* Define with no value on non-Windows OSes. */
  #define CRYPTOAPI
  #define CRYPTOCALL

#endif

#ifdef __cplusplus
extern "C"
{
#endif

CRYPTOAPI void CRYPTOCALL encrypt(char* plainText, char* cryptText, size_t length);
CRYPTOAPI void CRYPTOCALL decrypt(char* cryptText, char* painText, size_t length);

#ifdef __cplusplus
} // __cplusplus defined.
#endif

#endif /* SRC_CRYPTO_H_ */
