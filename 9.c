#include <stdio.h>
int main()
{
    int N;
    int count = 0;
    
    printf ("\nInput number N: ");
    scanf ("%d", &N);
    
    while (N > 0)
    {
        N /= 10;
        count ++;
    }
    printf ("This number - %d digits\n", count);
    getchar();
    return 0;
}
