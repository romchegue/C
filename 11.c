#include <stdio.h>
int main()
{
    int A, B;
    while (1)
    {
        printf ("Input 2 integer numbers: ");
        scanf ("%d%d", &A, &B);
        if (A == 0 && B == 0) break;
        if (B == 0) 
        {
            printf ("[ERROR!!!] Devision by zero! Type divider not equal 0!\n");
            continue;
        }
        printf ("\n%d / %d = %d_%d/%d\n", A, B, A/B, A%B, B);
    }
    getchar();
    return 0;
}
