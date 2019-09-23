#include <stdio.h>
main()
{
    printf("Hello, world!\n"); // вывод на экран
    getchar();     /*ждать нажатия клавиши Enter*/
}


/*##################################################*/

int a; // выделить память под целую переменную a

float b, c; // две вещественных переменных b и с

int Tu104, Il86=23, Yak42; //три целых переменныхб 
//в Il86 сразу записывается число 23

float x=4.56, y, z; // три вещественных переменных,
// в x сразу записывается число 4.56

char c, c2='A', m; // три сомвольных переменных, в c2
// сразу записывается символ 'A'


/*##################################################*/
/*Задача. Ввести с клавиатуры два целых числа и вывести на экран их сумму*/

#include <stdio.h>

main()
{
	int a, b, c; // объявление переменных
	printf ( "введиет два целых числа \n" ); // подсказка для ввода
	scanf ( "%d%d", &a, &b );                // ввод данных
	c = a + b;                               // вычисления (оператор присваивания)
	printf ( "Результат: %d + %d = %d \n", a, b, c); // вывод результата
	getchar();
}


/*##################################################*/
#include <stdio.h>
main()
{
	float A, B;
	printf("Input A and B: ");
	scanf("%f%f", &A, &B);
	if (A > B)
	{
		printf ("Largest: %f", A);
	}
	else
	{
		printf ("Largest: %f", B);
	}
	getchar();
}


#include <stdio.h>
main()
{
	float A, B, Max;
	printf("Input A and B: ");
	scanf("%f%f", &A, &B);
	if (A > B)
	{
		Max = A;
	}
	else
	{
		Max = B;
	}
	printf ("Largest: %f", Max);
	getchar();
}


#include <stdio.h>
main()
{
	float A, B, Max;
	printf("Input A and B: ");
	scanf("%f%f", &A, &B);
	Max = A;
	if (B > A)
		Max = B;
	printf ("Largest: %f", Max);
	getchar();
}


/*##################################################*/

#include <stdio.h>

main()
{
	char c;
	printf("\nInput the first letter:\n");
	scanf("%c", &c);  // ввести букву
    switch (c)  // заголовок оператора выбора
	{
		case 'a': printf("\nAntelope"); break;
		case 'b': printf("\nBadger"); break;
		case 'c': printf("\nCamel"); break;
		default: printf("\nI don't know this");     // по умолчанию
	}
	getchar();	
}


#include <stdio.h>

main()
{
	char c;
	printf("\nInput the first letter:\n");
	scanf("%c", &c);  // ввести букву
    switch (c)  // заголовок оператора выбора
	{
		case 'a': 
		case 'A': printf("\nAntelope"); break;
		case 'b':
		case 'B': printf("\nBadger"); break;
		case 'c': 
		case 'C': printf("\nCamel"); break;
		default: printf("\nI don't know this");     // по умолчанию
	}
	getchar();	
}


/*##################################################*/
#include <stdio.h>

main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("Hello");
	}
	getchar();
}


/*##################################################*/
#include <stdio.h>

main()
{
	int i, N;
	printf("\nInput a natural number:\n");
	scanf("%d", &N);	 
	for (i = 1; i <= N; i++)
	{
		printf("Square of number %d is equal to %d\n", i, i*i);
	}
	getchar();
}


/*##################################################*/
#include <stdio.h>

main()
{
    int N;  // число, с которым мы работаем
	int count=0;  // счетчик цифр
	
    printf("\nInput a natural number:\n");  // подсказка
    scanf("%d", &N);     // ввод N с клавиатуры
	while (N > 0)
	{
		N /= 10;   // отсекаем последнюю цифру
		count++;   // увеличиваем счетчик цифр
	}
	printf("\nThis number contains %d digits\n", count);
	getchar();
}


/*##################################################*/
#include <stdio.h>

main()
{
	int N, sum;
	sum = 0; // начальное значение суммы
	
	do 
	{
		printf("\nInput a natural number:\n");
		scanf("%d", &N);
	}
	while (N <= 0);
	
	while (N > 0)
	{
		sum += N % 10;
		N /= 10;
	}
	printf("\nThe sum of digits is %d\n", sum);
	getchar();	
}


/*##################################################*/
#include <stdio.h>

main()
{
	int A, B;
	while (1)  // бесконечный цикл, выход только по break!
	{
	    printf("Enter 2 integers:\n");
	    scanf("%d%d", &A, &B);
	    
	    if (A == 0 && B == 0) break; // выход из цикла
		if (B == 0)
		    {
		    	printf("Division by zero!!! Try other numbers ;)\n");
		    	continue; //досрочный переход к новому шагу цикла
		    }
        printf("The quotient: %d; the remainder: %d\n", A/B, A%B);
    }
    getchar();
}


/*##################################################*/
#include <stdio.h>

main()
{
	float S, z, c, d;
	int i;
	S = 0; z = 1; c = 1; d = 2; // начальные значения
	for (i = 1; i <= 20; i ++)
	{
		S += z * c / d;   // добавить элемент к сумме
		z = -z;
		c ++;
		d *= 2;
	}
	printf("The sum is %f", S);
	getchar();
}


/*##################################################*/
#include <stdio.h>

main()
{
	float S, z, c, d, a; 
    S = 0; z = 1; c = 1; d = 2; //начальные значения
	a = 0.5; // первый элемент последовательности
	
	while (a >= 0.001)
	{
		S += z * a;   // добавить элемент к сумме
		z = -z;
		c++;
		d *= 2;
		a = c / d;   // модуль следующего элемента
	}
	printf("The sum is %f\n", S);
	getchar();    
}


/*##################################################*/

#include <graphics.h>

main()
{
	initwindow (400, 300); // открыть окно для графики 400 Х 300
	/*... здесь можно рисовать на экране ("мясо")*/
	getch();  // ждем нажатия клавиши
	closegraph();  // закрыть окно	
}


/*##################################################*/

#include <graphics.h>
main()
{
initwindow (440, 300);
setfillstyle (1, 9);
bar (100,100,300,200); // синий прямоугольник
setcolor (13); // с фиолетовой рамкой
rectangle (100,100,300,200);
moveto (100,100); // крыша-ломаная
lineto (200, 50);
lineto (300,100);
setfillstyle (1, 14); // зальем крышу желтым
floodfill (200, 75, 13);
setcolor (15);
circle (200, 150,50); // белая окружность
setfillstyle (1, 10);
floodfill (200,150, 15); // зеленая заливка
setcolor (12);
outtextxy (100, 230, "Sharik's house.");
getch();
closegraph();
}


/*##################################################*/
#include <graphics.h>

void Tr (int x, int y, int c)
{
	moveto(x, y);        // курсор в левый нижний угол
	lineto(x, y-60);     // рисуем контур
	lineto(x+100, y);
	lineto(x,y);         
	setfillstyle(1, c);  // устанавливаем цвет заливки
	floodfill(x+20, y-20, 15);  // заливка до белой границы
}

main()
{
	initwindow(400, 300);
	Tr(100, 100, COLOR(0,0,255));
	Tr(200, 100, COLOR(0,255,0));
	Tr(200, 160, COLOR(255,0,0));
	getch();
	closegraph();
}


/*##################################################*/
/*Задача. Написать программу, которая вводит целое 
число и определяет сумму его цифр. Использовать 
функцию, вычисляющую сумму цифр числа.*/

#include <stdio.h>

int sum_counter (int number)
{
	int sum = 0;
	while (number > 0)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

main()
{
	int N;
	printf("Enter natural number\n");
	scanf("%d", &N);
	printf("Number %d. The sum of digits: %d", N, sum_counter(N));
	getchar();
	return 0;
}


/*##################################################*/
/*Задача. Ввести число N и определить, простое оно 
или нет. Использовать функцию, которая отвечает на 
этот вопрос.*/

#include <stdio.h>

int Prime (int N);

main()
{
	int N;
	printf("Enter natural number\n");
	scanf("%d", &N);
	if (Prime(N))    // function call
	    printf("%d is prime number\n", N);
	else printf("%d is not prime number\n", N);
	getchar();
}


int Prime (int N)
{
    if (N <= 1)
       return 0; // 0, 1 - are not prime numbers
	for (int i = 2; i*i <= N; i++)
		if (N % i == 0) return 0;   // found the divisor is composite
	return 1;  // not found divisors – prime number
}


/*##################################################*/
/*Задача. Написать функцию, которая определяет 
максимальное и минимальное из двух целых чисел.*/

#include <stdio.h>

int MinMax(int a, int b, int &Max);

main()
{
	int N, M, min, max;
	printf("Enter 2 integer numbers:\n");
	scanf("%d%d", &N, &M);
	min = MinMax(N, M, max);
	printf("The smallest is %d, the largest is %d", min, max);
	getchar();
}


int MinMax(int a, int b, int &Max)
{
	if (a > b) { Max = a; return b; }
	else { Max = b; return a; }
}


/*##################################################*/
#include <graphics.h>
void Draw(int x, int y, int color)
{
	setfillstyle(1, color);     // сплошная заливка, цвет color
	bar(x, y, x+20, y+20);      // залитый прямоугольник
}

main()
{
	int x, y, code;                 // координты квадрата
	initwindow(400, 400);     // открыть окно для графики
	setfillstyle(1, COLOR(0, 0, 255));     // сплошная заливка, синий цвет
	bar (0, 0, 399, 399);     // залить фон
	x = 0;  y = 240;          // начальные координаты квадрата
    while ( x + 20 < 400 ) // пока не коснулся границы окна
    {
        if ( kbhit() ) // если нажата клавиша...
            if ( getch() == 27 ) break; // если Esc, выход из цикла
        Draw ( x, y, COLOR(255,255,0) ); // рисуем желтый квадрат
        delay ( 20 ); // смотрим на него (задержка)
        Draw ( x, y, COLOR(0,0,255) ); // стираем
        x ++; // перемещаем
    }
	closegraph();
}


/*##################################################*/
#include <graphics.h>
void Draw(int x, int y, int color)
{
	setfillstyle(1, color);     // сплошная заливка, цвет color
	bar(x, y, x+20, y+20);      // залитый прямоугольник
}

main()
{
	int x, y, code;                 // координты квадрата
	initwindow(400, 400);     // открыть окно для графики
	setfillstyle(1, COLOR(0, 0, 255));     // сплошная заливка, синий цвет
	bar (0, 0, 399, 399);     // залить фон
	x = 0;  y = 240;          // начальные координаты квадрата
	while (1)
    {
        Draw ( x, y, COLOR(255,255,0) ); // рисуем квадрат
        code = getch(); // ждем нажатия клавиши
        if ( code == 27 ) break; // если Esc, то выход
        Draw ( x, y, COLOR(0,0,255) ); // стираем квадрат
        switch ( code )             // выбор направления
		{ 
            case 75: x --; break; // влево
            case 77: x ++; break; // вправо
            case 72: y --; break; // вверх
            case 80: y ++; // вниз
        }
    }
	closegraph();
}


/*##################################################*/
#include <graphics.h>

void Draw(int x, int y, int color)
{
	setfillstyle(1, color);   // сплошная заливка, цвет color
	bar (x, y, x+20, y+20);   // залитый прямоугольник 20х20
}

main()
{
	int dx, dy, x, y, code;
	initwindow(400, 400);     // открыть окно для графики
	setfillstyle(1, COLOR(0, 0, 255));     // сплошная заливка, синий цвет
	bar(0, 0, 399, 399);     // залить фон
	x = 0;  y = 240;          // начальные координаты квадрата
	dx = 1; dy = 0;           // сначала двигается вправо
	while (1)                 // бесконечный цикл
	{
		if ( kbhit() ) // если нажата клавиша...
        {
        	code = getch();     // получить ее код
            if ( code == 27 ) break; // если Esc, выход из цикла
            switch (code)
            {
            	case 75: dx = -1; dy = 0; break;   // влево
            	case 77: dx = 1; dy = 0; break;    // вправо
            	case 72: dx = 0; dy = -1; break;   // вверх
            	case 80: dx = 0; dy = 1;           // вниз
			}
		}
		
		Draw(x, y, COLOR(255,255,0));     // рисуем квадрат
		delay(10);                        // ждём
		Draw(x, y, COLOR(0,0,255));       // стриаем квадрат
		x += dx;                          // двигаем квадрат
		y += dy;
	}
	closegraph();
}


/*##################################################*/

/*Написать игру, подобную змейки в тетрисе, но только с 1 квадратом.
Смысл - нельзя выходить за границы. Двигать нужно стрелками.*/

#include <graphics.h>

void Draw(int x, int y, int color)
{
    setfillstyle(1, color);    // стиль заливки. 1 - сплошная, цвет color
    bar(x, y, x+20, y+20);     // рисуем прямоугольник (квадрат)
}

int Game()
{
    int dx, dy, code; // направление лвижения по осям X и Y, код символа с клавиатуры
    int x, y;
	x = 0; y = 200; dx = 1; dy = 0; // стартуем с точки (0;200) вправо
	/* (0 <= x < 380 && 0 <= y < 380) пока квадрат 20х20 ни вышел за рамки окна 400х400 */
	while (1)
	{
		if (kbhit())
		{   
		    code = getch();
			if (code == 27) break;
			switch(code)
			{
				case 75: dx = -1; dy = 0; break; // left
				case 77: dx = 1; dy = 0; break; // right
				case 72: dx = 0; dy = -1; break; // up
				case 80: dx = 0; dy = 1; // down
			}
		}
		Draw(x, y, COLOR(255,255,0));  // рисуем желтый квадрат
		delay(100);                     // задержка 10 мс
		Draw(x, y, COLOR(0,0,255));    // стираем квадрат (закрашиваем цветом фона)
		x += dx; y += dy;
		if (x < 0 || x > 380 || y < 0 || y > 380)    // выход за границы экрана
		{
            break;    // выход из игры
		}
	}
}


main()
{
	/*int x, y;   // будущие координаты левого верхнего угла
	int dx, dy, code; // направление лвижения по осям X и Y, код символа с клавиатуры */
	initwindow(400, 400);  // открыть окно для графики
	setfillstyle(1, COLOR(0,0,255)); // стиль залики окна сплошной синий
    bar(0, 0, 399, 399);  // залить окно - рисуем прямоугольник во всю площадь
    Game();
    setfillstyle(1, COLOR(255,0,0)); // стиль залики окна сплошной синий
    bar(0, 0, 399, 399);  // залить окно - рисуем прямоугольник во всю площадь
    getchar();
    closegraph();
}


/*##################################################*/

/*Снег на экране. */

#include <graphics.h>
#include <stdlib.h>
int random (int N) { return rand() % N; }  // функция

main()
{
    int x, y, R, G, B; 
    initwindow(500, 500);
    while ( ! kbhit() )         // пока не нажата любая клавиша
    {
    	x = random(500);        // случайные координаты
    	y = random(500);
    	R = random(256);       // случайный цвет (R, G, B)
    	G = random(256);
    	B = random(256);
    	if ( getpixel(x,y) != 0 )    // если точка не черного цвета
    	    putpixel (x, y, 0);      // делаем ее черной
    	else                       // иначе...
    	    putpixel (x, y, COLOR(R, G, B));   // случайный цвет
	}
	getch();
	closegraph();
}


/*##################################################*/




















