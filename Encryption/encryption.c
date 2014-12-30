#include <stdio.h>
#include <string.h>
#include "base64.h"

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        printf("Arguments required\n");
        return 0;
    }
    if (strcmp(argv[1], "-version") == 0)
    {
        printf("Encryption version \"0.0.1\"\n");
    }
    else if (strcmp(argv[1], "-help") == 0)
    {
        printf("Supported encrypt types: \n");
        printf("    base64 -e|-d <text>\n");
    }
    else if (strcmp(argv[1], "base64") == 0)
    {
        if (strcmp(argv[2], "-e") == 0)
            printf("%s\n", base64((char*)argv[3], BASE64_ENCRYPT));
    }
    return 0;
}
