#include <stdio.h>

int main(void) {
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'A': printf("left-right\n"); break;
        case 'B': printf("up-down\n"); break;
        case 'C': printf("up-down\n"); break;
        case 'D': printf("up-down\n"); break;
        case 'E': printf("up-down\n"); break;
        case 'F': printf("common\n"); break;
        case 'G': printf("common\n"); break;
        case 'H': printf("up-down\nleft-right\ncenter\n"); break;
        case 'I': printf("up-down\nleft-right\ncenter\n"); break;
        case 'J': printf("common\n"); break;
        case 'K': printf("up-down\n"); break;
        case 'L': printf("common\n"); break;
        case 'M': printf("left-right\n"); break;
        case 'N': printf("center\n"); break;
        case 'O': printf("up-down\nleft-right\ncenter\n"); break;
        case 'P': printf("common\n"); break;
        case 'Q': printf("common\n"); break;
        case 'R': printf("common\n"); break;
        case 'S': printf("center\n"); break;
        case 'T': printf("left-right\n"); break;
        case 'U': printf("left-right\n"); break;
        case 'V': printf("left-right\n"); break;
        case 'W': printf("left-right\n"); break;
        case 'X': printf("up-down\nleft-right\ncenter\n"); break;
        case 'Y': printf("left-right\n"); break;
        case 'Z': printf("center\n"); break;
        default: break;
    }

    return 0;
}
