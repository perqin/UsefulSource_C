#ifndef ENCRYPTION_BASE64
#define ENCRYPTION_BASE64

#include <string.h>

#define BASE64_ENCRYPT 'E'
#define BASE64_DECRYPT 'D'
#define MAX_LENGTH 100

char *base64(char *text, char mode);
void base64_enc(char *r_p, char c1, char c2, char c3);

#endif // ENCRYPTION_BASE64