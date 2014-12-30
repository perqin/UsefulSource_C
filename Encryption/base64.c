#include "base64.h"

char base64_alp[64] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
    'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
    'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
    'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
    'w', 'x', 'y', 'z', '0', '1', '2', '3',
    '4', '5', '6', '7', '8', '9', '+', '/'
};

char result[MAX_LENGTH];

char *base64(char *text, char mode)
{
    int textLength = strlen(text), i;
    result[0] = '\0';
    char _tmp[5] = {'\0', '\0', '\0', '\0', '\0'};
    if (mode == BASE64_ENCRYPT)
    {
        i = 0;
        while (i + 2 < textLength)
        {
            base64_enc(_tmp, text[i], text[i + 1], text[i + 2]);
            strcat(result, _tmp);
            i += 3;
        }
        switch (textLength - i)
        {
        case 1:
            base64_enc(_tmp, text[i], 0, 0);
            strcat(result, _tmp);
            break;
        case 2:
            base64_enc(_tmp, text[i], text[i + 1], 0);
            strcat(result, _tmp);
            break;
        default:
            break;
        }
        return result;
    }
    else if (mode == BASE64_DECRYPT)
    {
        return result;
    }
}

void base64_enc(char *r_p, char c1, char c2, char c3)
{
    char e1 = (c1 >> 2) & 63;
    char e2 = ((c2 >> 4) & 15) + ((c1 & 3) << 4);
    char e3 = ((c2 & 15) << 2) + ((c3 >> 6) & 3);
    char e4 = c3 & 63;
    r_p[0] = base64_alp[e1];
    r_p[1] = base64_alp[e2];
    if (c2 == 0)
    {
        r_p[2] = '=';
        r_p[3] = '=';
    }
    else if (c3 == 0)
    {
        r_p[2] = base64_alp[e3];
        r_p[3] = '=';
    }
    else
    {
        r_p[2] = base64_alp[e3];
        r_p[3] = base64_alp[e4];
    }
}
