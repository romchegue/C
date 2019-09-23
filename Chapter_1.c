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

int main()
{
    printf("%d\n", EOF);
    return 0;
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
/*Упражнение 1.14. Напишите программу, печатающую гистограммы 
частот встречаемости вводимых символов.*/

#include <stdio.h>

/* гистограмма частот встречаемости введенных символов
   подсчитываются символы с ASCII-кодами от 0 до 256 */

main()
{
    int c, i, j, symbols[256];
    for (i = 0; i < 256; ++i)
        symbols[i] = 0;

    while ((c = getchar()) != EOF)
        ++symbols[c];

    for (i = 0; i < 256; i++)
        if (symbols[i] > 0)
        {
            if (i >= 32)
                printf("Symbol %c - ", i);
            else
                printf("Code %2d - ", i);
            for (j = 0; j < symbols[i]; ++j)
                putchar('#');
            putchar('\n');
        }
}


/*##################################################*/
#include <stdio.h>

int power(int m, int n);

/*Тест функции power*/
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

/*возводит base в n-ю степень, n >= 0*/
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}


/*##################################################*/
/*Упражнение 1.15. Перепишите программу преобразования 
температур, выделив само преобразование в отдельную функцию.*/

#include <stdio.h>

#define LOWER 0 /*нижняя граница таблицы*/
#define UPPER 300 /*верхняя граница таблицы*/
#define STEP 20 /*размер шага*/

/*печать таблицы температур по Фаренгейту и Цельсию*/
int main()
{
    fahr_cels();
    return 0;
}

int fahr_cels()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    return 0;
}


/*##################################################*/
#include <stdio.h>
/*power: возводит base в n-ю степень; n >= 0, версия 2 */

int power(int m, int n);

/*Тест функции power*/
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}


/*##################################################*/
#include <stdio.h>
#define MAXLINE 1000 /*максимальный размер вводимой строки*/

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/*печать самой длинной строки*/
main()
{
    int len; /*длина текущей строки*/
    int max; /*длина максимальной из просмотренных строк*/
    char line[MAXLINE]; /*текущая строка*/
    char longest[MAXLINE]; /*самая длинная строка*/
    
    max = 0;
    while ((len = getlines(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /*была ли хоть одна строка?*/
        printf("%s\n", longest);
    return 0;
}


/*getlines: читает строку в s, возвращает длину*/
int getlines(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

/*copy: копирует из 'from' в 'to'; to достаточно большой*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}


/*##################################################*/
/*Упражнение 1.16. Перепишите main предыдущей программы так, 
чтобы она могла печатать самую длинную строку без каких-либо 
граничений на ее размер.

Упражнение 1.16.
В русском варианте перевод какой-то неточный, дословно перевод 
говорит, что надо определить длину вводимой строки, вывести 
её на экран и напечатать часть текста(которая входит в диапазон 
массива).*/

#include <stdio.h>
#define MAXLINE 10 /*максимальный размер вывода строки на экран*/

int getlin(char line[], int MAX);
void copy(char to[], char from[]);

/*печать самой длинной строки*/
int main()
{
    int len; //длина текущей строки
    int max; //длина максимальной из рассмотренных строк
    char line[MAXLINE]; //текущая строка
    char longest[MAXLINE]; //самая длинная строка
    int c; //вводимый символ getchar()
    max = 0;
    while ((len = getlin(line, MAXLINE)) > 0)
    {
        if (line[len-1] != '\n')
            while ((c = getchar()) != EOF && c != '\n')     
                len++;
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max < MAXLINE) // вычитаем символ '\0', вставленный в getlin
        max--;
    if (max > 0)
    {
        printf("Самая длинная строка\n");
        if (max > MAXLINE)
            printf("%s...\n", longest);
        else
            printf("%s\n", longest);
    }
    printf("длина строки - %d символов\n", max);
    return 0;
}

/*getlin: читает строку в s, возвращает длину*/
int getlin(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

/*copy: копирует из 'from' в 'to'; to достаточно большой*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}



/*##################################################*/
/*Упражнение 1.17. Напишите программу печати всех вводимых строк, 
содержащих более 10 символов.*/

#include <stdio.h>
#define MAXLINE 1000 //Маскимальный размер вводимой строки
#define BORDER 10

int getlin(char line[], int MAX);

/*печать строки длинной больше 10 символов*/
int main()
{
    int len; //длина текущей строки
    char line[MAXLINE]; //текущая строка
    while ((len = getlin(line, MAXLINE)) > 0)
        if ((len - 1) > BORDER)
            printf("Эта строка больше 10 символов: %s\n", line);
    return 0;
}

/*getlin: читает строку в s, возвращает длину*/
int getlin(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}


/*##################################################*/
/*Упражнение 1.18. Напишите программу, которая будет в 
каждой вводимой строке заменять стоящие подряд 
символы пробелов и табуляций на один пробел и 
удалять пустые строки.


В оригинале звучит так - Напишите программу, 
чтобы удалить завершающие пробелы и символы табуляции 
в каждой строке ввода, и чтобы полностью удалить 
пустые строки.*/

#include <stdio.h>
#define MAXLINE 1000 // максимальный размер вводимой строки

int getlin(char line[], int MAX);

int main()
{
    int len, i; //длина текущей строки, переменная
    char line[MAXLINE]; //текущая строка
    while((len=getlin(line, MAXLINE))>0)
    {
        len-=1;//отнимаем '\0'
        /*уменьшаем строку, убирая пробелы и табуляции */
        for(i=len-1; i>=0; i--)
            if(line[i]=='0' || line[i]=='1')
                len--;
            else i=0;
        if (len!=0)//если строка не пустая выводим её
        {
            for(i=0; i<len; i++)
                printf("%c", line[i]);
            printf("\n");
        }
    }
    return 0;
}

/*getline читает строку в s, возвращает длину*/
int getlin(char s[], int lim)
{
    int c, i;
    for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++)
        s[i]=c;
    if(c=='\n')
    {
        s[i]=c;
        i++;
    }
    s[i] = '\0';
    return i;
}


/*##################################################*/
/*Упражнение 1.19. Напишите функцию reverse(s), 
размещающую символы в строке s в обратном порядке. 
Примените ее при написании программы, которая каждую 
вводимую строку располагает в обратном порядке.*/

#include <stdio.h>
#define MAX 1000

void reverse(char s[], int n);
int main(int argc, char **argv)
{
    
    char line[MAX];
    int i, m;
    char c;
    i=0;
    while((c=getchar()) != EOF)
    {
        line[i]=c;
        i++;
        if(c=='\n')
        {
            line[i]='\0';
            m=i;   //запоминаем длину введённой строки
            i=0;
            reverse(line, m);
            printf("%s\n", line);
        }
    }
    return 0;
}

void reverse(char s[], int n)
{
    char tmp[MAX];
    int i, j;
    for(i=0; i<n; i++)
        tmp[i]=s[i];
    i-=2; //отнимаем символ \0, и ещё один элемент 
    /*из-за правил нумерации массива*/
    for(j=0; j<(n-1); j++, i--)
        s[j]=tmp[i];
}


/*##################################################*/

#include <stdio.h>

#define MAXLINE 1000 /*максимальный размер вводимой строки*/

int max; /*блина максимальной из просмотренных строк*/
char line[MAXLINE]; /*текущая строка*/
char longest[MAXLINE]; /*самая длинная строка*/

int getlin(void);
void copy(void);

/*печать самой длинной строки: специализированная версия*/
main()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while ((len = getlin()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0) /*была хотя бы одна строка?*/
        printf("%s", longest);
    return 0;
}

/* getline: специализированная версия */
int getlin(void)
{
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: специализированная версия */
void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}


/*##################################################*/
