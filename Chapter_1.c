/*##################################################*/
#include <stdio.h>
main()
{
printf("Hello, world\n");
}


/*##################################################*/
#include <stdio.h>
/*печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0,20,...,300*/
main()
{
int fahr,celsius;
int lower,upper,step;
lower = 0; /*нижняя граница таблицы температур*/
upper = 300; /*верхняя граница таблицы температур*/
step = 20; /*шаг*/
fahr = lower;
while(fahr <= upper)
    {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n",fahr,celsius);
    fahr = fahr + step;
    }
}


/*##################################################*/
#include <stdio.h>
/*печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0,20,...,300*/
main()
{
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
/*Упражнение 1.4. печать таблицы температур по Цельсию
и Фаренгейту для celsius = 0,10,...,150*/
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


/*##################################################*/
#include <stdio.h>
/*Печать таблицы температур по Фаренгейту и Цельсию*/
main()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


/*##################################################*/
/*Упражнение 1.5. Измените программу преобразования температур так, 
чтобы она печатала таблицу в обратном порядке, т. е. от 300 до 0.*/
#include <stdio.h>
/*Печать таблицы температур по Фаренгейту и Цельсию*/
main()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


/*##################################################*/
#include <stdio.h>

#define LOWER 0 /*нижняя граница таблицы*/
#define UPPER 300 /*верхняя граница таблицы*/
#define STEP 20 /*размер шага*/

/*печать таблицы температур по Фаренгейту и Цельсию*/
int main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


/*##################################################*/
#include <stdio.h>
/*Copying input to output, 1st version*/
int main(void)
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}


/*##################################################*/
#include <stdio.h>
/*Copying input to output, 2nd version*/
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}


/*##################################################*/
#include <stdio.h>
/* Упражнение 1.6. Убедитесь в том, что выражение 
getchar() != EOF получает значение 0 или 1. 

Проверка выражения getchar() != EOF
Для получения 0, необходимо нажать Ctrl+D в Linux-e
или Ctrl+Z в Windows */

int main(void)
{
    int result;
    result = (getchar() != EOF);
    if (result == 0)
        printf("Равно 0\n");
    if (result == 1)
        printf("Равно 1\n");
}


/*##################################################*/
#include <stdio.h>
/* Упражнение 1.7. Напишите программу, печатающую значение EOF

Проверка выражения getchar() != EOF
Для получения 0, необходимо нажать Ctrl+D в Linux-e
или Ctrl+Z в Windows */

int main(void)
{
    printf("%d\n", EOF);
}


/*##################################################*/
#include <stdio.h>
/*Подсчёт вводимых символов; 1-я версия*/
int main()
{
    long nc;
    nc = 0;
    
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}


/*##################################################*/
#include <stdio.h>
/*Подсчёт вводимых символов; 2-я версия*/
int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}


/*##################################################*/
#include <stdio.h>
/*Подсчёт строк входного потока*/
int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}


/*##################################################*/
#include <stdio.h>
/*Упражнение 1.8. Напишите программу для подсчета пробелов, 
табуляций и новых строк.*/
int main()
{
    int c, ns, nt, nl;
    ns = nt = nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++ns;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }
    printf("Spaces:    %d\nTabs:      %d\nNew lines: %d\n", ns, nt, nl);
}


/*##################################################*/
#include <stdio.h>
/*Упражнение 1.9. Напишите программу, копирующую символы ввода в 
выходной поток и заменяющую стоящие подряд пробелы на один пробел.*/
int main()
{
    int c, ns;
    ns = 0;                           /*ns - счётчик количества пробелов*/
    while ((c = getchar()) != EOF)    /*Ввод символов с клавиатуры до получения EOF*/
    {
        if (c != ' ')          /*Если символ не равен пробелу - печатать его*/
            {
                putchar(c);
                ns = 0;
            }
        if (c == ' ')           /*Если символ равен пробелу, приращиваем счетчик ns на 1*/
            {
                ++ns;
                if (ns == 1)   /*Первый символ пробела мы всё же напечатаем*/ 
                   putchar(c);
            }
    }
}


/*##################################################*/
#include <stdio.h>
/*Упражнение 1.10. Напишите программу, копирующую вводимые символы 
в выходной поток с заменой символа табуляции на \t, символа забоя на \b 
и каждой обратной наклонной черты на \\. 
Это сделает видимыми все символы табуляции и забоя.*/
int main()
{
    int c, spec;
    while ((c = getchar()) != EOF)
    {
        spec = 0;
        if (c == '\t')
        {
            printf("\\t");
            spec = 1;            
        }
        if (c == '\b')
        {
            printf("\\b");
            spec = 1;            
        }
        if (c == '\\') 
        {
            printf("\\\\");
            spec = 1;
        }
        if (spec == 0)
            putchar(c);
    }
}


/*##################################################*/
#include <stdio.h>

#define IN 1 /*внутри слова*/
#define OUT 0 /*вне слова*/

/*подсчет строк, слов и символов*/
main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}


/*##################################################*/
/*Упражнение 1.12. Напишите программу, которая печатает 
содержимое своего ввода, помещая по одному слову на каждой строке.*/

#include <stdio.h>

#define IN 1 /*внутри слова*/
#define OUT 0 /*вне слова*/

/*печать по одному слову на каждой строке*/
main()
{
    int c, state;
    state = OUT;
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
            {  
               if (state == IN)
               {
                    putchar('\n');
                    state = OUT;
               }    
            }    
        else
        {
            state = IN;
            putchar(c);
        }
    }
}


/*##################################################*/
#include <stdio.h>
/* подсчет цифр, символов-разделителей и прочих символов */
main()
{
    int c, i, nwhite, nother;
    int ndigit[10];
    
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", delimiter-characters = %d, others = %d\n", nwhite, nother);
}


/*##################################################*/
/*Упражнение 1.13. Напишите программу, печатающую гистограммы 
длин вводимых слов. Гистограмму легко рисовать горизонтальными 
полосами. Рисование вертикальными полосами - более трудная задача.*/
#include <stdio.h>

#define IN 1 /*внутри слова*/
#define OUT 0 /*вне слова*/

/*Печать длин вводимых слов.*/
main()
{
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
                putchar('\n');
            state = OUT;
        }
        else
        {
            if (state == OUT)
                state = IN;
            putchar('#');
        }
    }
}


/*##################################################*/
/*Упражнение 1.14. Напишите программу, печатающую гистограммы 
частот встречаемости вводимых символов.*/

#include <stdio.h>
/*Печать гистограммы частот встречаемости вводимых символов.*/

main()
{
    int c, i, j, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("\nRESULTS:\n1. Digits.\n");
    for (i = 0; i < 10; ++i)
        {
            printf("%d: ", i);
            for (j = 0; j < ndigit[i]; ++j)
                {
                    if (j >= 50)
                    {
                        printf("... up to %d", ndigit[i]);
                        break;
                    }
                    putchar('#');
                }
            printf("\n");
        }

    printf("2. Delimiters.\n");
    for (j = 0; j < nwhite; ++j)
        {
            if (j >= 50) 
            {
                printf("... up to %d", nwhite);
                break;
            }
            putchar('#');
        }
        
        
    printf("\n3. Others.\n");
    for (j = 0; j < nother; ++j)
        {
            if (j >= 50) 
            {
                printf("... up to %d", nother);
                break;
            }
            putchar('#');
        }
    putchar('\n');
}


/*##################################################*/
