#include <stdio.h>
int main()
{
    int N, sum;
    sum = 0;
    do 
    {
        printf ("\nInput a natural number: ");
        scanf ("%d", &N);
    }
    while (N <= 0);
    while (N > 0)
    {
        sum += N % 10;
        N /= 10;
    }
    printf ("Sum of digits in the number is %d\n", sum);
    getchar();
    return 0;
}
