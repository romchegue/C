#include <stdio.h>
/*Упражнение 1.4. печать таблицы температур по Цельсию
 * и Фаренгейту для celsius = 0,10,...,150*/
main()
{
float fahr,celsius;
int lower,upper,step;
lower = 0; /*нижняя граница таблицы температур*/
upper = 300; /*верхняя граница таблицы температур*/
step = 10; /*шаг*/
fahr = lower;
printf("Cels:   Fahr:\n");
while(fahr <= upper)
    {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f\t%6.1f\n",celsius, fahr);
    celsius = celsius + step;
    }
}
