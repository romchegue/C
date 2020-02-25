#include <stdio.h>
int main()
{
    float S=0, c=1, d=2;
    int i, z=1;
    for (i = 1; i <= 20; i ++)
    {
        S += z * c / d;
        z = -z;
        c ++;
        d *= 2;
    }
    printf ("The sum = %f", S);
    getchar();
    return 0;
}
