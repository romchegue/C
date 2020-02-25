// Amounts with a limiting condition

#include <stdio.h>
int main()
{
    int i, z=1;
    float c=1, d=2, S=0;
    while (c / d >= 0.001)
    {
        S += z * c / d;
        z = -z;
        c ++;
        d *= 2;
    }
    printf ("The sum is %f", S);
    getchar();
    return 0;
}
