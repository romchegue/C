#include <stdio.h>
main() {
    char c;
    printf("\nInput a first letter: ");
    scanf("%c", &c);    
    switch (c) {
        case 'a':
        case 'A':
            printf("\nAntilopa\n"); break;
        case 'b': 
        case 'B':
            printf("\nBarsuk\n"); break;
        case 'c': 
        case 'C':
            printf("\nCaplya\n"); break;
        default: printf("\nI don't know...\n");
    }
    getchar();
}
