#include <stdio.h>
/*Copying input to output, 2nd version*/
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}
