#include <stdio.h>
/*печать таблицы температур по Фаренгейту
 * и Цельсию для fahr = 0,20,...,300*/
main(){
float fahr,celsius;
int lower,upper,step;
lower = 0; /*нижняя граница таблицы температур*/
upper = 300; /*верхняя граница таблицы температур*/
step = 20; /*шаг*/
fahr = lower;
while(fahr <= upper)
    {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t%6.1f\n",fahr,celsius);
    fahr = fahr + step;
    }
}


/*##################################################*/
#include <stdio.h>

#define LOWER 0 /*нижняя граница таблицы*/
#define UPPER 300 /*верхняя граница таблицы*/
#define STEP 20 /*размер шага*/

/*печать таблицы температур по Фаренгейту и Цельсию*/
main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
