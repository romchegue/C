#include <stdio.h>
int main()
{
    int i, N;
    char c, c1;
    printf ("Input number N: ");
    scanf ("%d", &N);
    for (i = 1; i <= N; i ++)
    {
        printf ("Square of %d is %d\n", i, i*i);
    }    
    c = getchar();        // Do you want to or not but that's a LF symbol (DEC = 10) 
    c1 = getchar();
    printf ("I cought c = %d and c1 = %d", c, c1);
    return 0;
}
