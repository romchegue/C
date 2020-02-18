#include <stdio.h>
main() 
{
int a, b, c;    // decleration of variables
printf ("Input 2 integer numbers \n");  // hint for an input
scanf ("%d%d", &a, &b);                 // input of veriables
c = a + b;      // calculation
printf ("The result: %d + %d = %d \n", a, b, c);
getchar();      // wait for pressing an Enter key
}
