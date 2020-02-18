#include <stdio.h>
main() {
    int a;
    float x;
    char ch;
    a = 1234;
    x = 123.45;
    ch = 'A'; 
    putchar('\n'); //###########
    printf("[%d]\n", a);
    printf("[%6d]\n", a);
    printf("[%-6d]\n", a);
    printf("[%2d]\n", a);
    putchar('\n'); //###########
    printf("[%c]\n", ch);
    printf("[%6c]\n", ch);
    printf("[%-6c]\n", ch);
    printf("[%2c]\n", ch);   
    putchar('\n'); //###########
    printf("[%f]\n", x);
    printf("[%9.3f]\n", x);
    printf("[%-9.3f]\n", x);
    printf("[%6.4f]\n", x);
    putchar('\n'); //###########
    printf("[%e]\n", x);
    printf("[%12.3e]\n", x);
    printf("[%-9.3e]\n", x);
    printf("[%6.4e]\n", x);
    putchar('\n'); //###########
    printf("[%g]\n", 12345);
    printf("[%g]\n", 123.45);
    printf("[%g]\n", 0.000012345);
    printf("[%10.3g]\n", 12345);
    printf("[%10.3g]\n", 123.45);
    printf("[%10.3g]\n", 0.000012345);

}
