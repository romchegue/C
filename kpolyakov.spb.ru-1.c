#include <stdio.h>
main()
{
    printf("Hello, world!\n"); // ����� �� �����
    getchar();     /*����� ������� ������� Enter*/
}


/*##################################################*/

int a; // �������� ������ ��� ����� ���������� a

float b, c; // ��� ������������ ���������� b � �

int Tu104, Il86=23, Yak42; //��� ����� ����������� 
//� Il86 ����� ������������ ����� 23

float x=4.56, y, z; // ��� ������������ ����������,
// � x ����� ������������ ����� 4.56

char c, c2='A', m; // ��� ���������� ����������, � c2
// ����� ������������ ������ 'A'


/*##################################################*/
/*������. ������ � ���������� ��� ����� ����� � ������� �� ����� �� �����*/

#include <stdio.h>

main()
{
	int a, b, c; // ���������� ����������
	printf ( "������� ��� ����� ����� \n" ); // ��������� ��� �����
	scanf ( "%d%d", &a, &b );                // ���� ������
	c = a + b;                               // ���������� (�������� ������������)
	printf ( "���������: %d + %d = %d \n", a, b, c); // ����� ����������
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
	scanf("%c", &c);  // ������ �����
    switch (c)  // ��������� ��������� ������
	{
		case 'a': printf("\nAntelope"); break;
		case 'b': printf("\nBadger"); break;
		case 'c': printf("\nCamel"); break;
		default: printf("\nI don't know this");     // �� ���������
	}
	getchar();	
}


#include <stdio.h>

main()
{
	char c;
	printf("\nInput the first letter:\n");
	scanf("%c", &c);  // ������ �����
    switch (c)  // ��������� ��������� ������
	{
		case 'a': 
		case 'A': printf("\nAntelope"); break;
		case 'b':
		case 'B': printf("\nBadger"); break;
		case 'c': 
		case 'C': printf("\nCamel"); break;
		default: printf("\nI don't know this");     // �� ���������
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
    int N;  // �����, � ������� �� ��������
	int count=0;  // ������� ����
	
    printf("\nInput a natural number:\n");  // ���������
    scanf("%d", &N);     // ���� N � ����������
	while (N > 0)
	{
		N /= 10;   // �������� ��������� �����
		count++;   // ����������� ������� ����
	}
	printf("\nThis number contains %d digits\n", count);
	getchar();
}


/*##################################################*/
#include <stdio.h>

main()
{
	int N, sum;
	sum = 0; // ��������� �������� �����
	
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
	while (1)  // ����������� ����, ����� ������ �� break!
	{
	    printf("Enter 2 integers:\n");
	    scanf("%d%d", &A, &B);
	    
	    if (A == 0 && B == 0) break; // ����� �� �����
		if (B == 0)
		    {
		    	printf("Division by zero!!! Try other numbers ;)\n");
		    	continue; //��������� ������� � ������ ���� �����
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
	S = 0; z = 1; c = 1; d = 2; // ��������� ��������
	for (i = 1; i <= 20; i ++)
	{
		S += z * c / d;   // �������� ������� � �����
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
    S = 0; z = 1; c = 1; d = 2; //��������� ��������
	a = 0.5; // ������ ������� ������������������
	
	while (a >= 0.001)
	{
		S += z * a;   // �������� ������� � �����
		z = -z;
		c++;
		d *= 2;
		a = c / d;   // ������ ���������� ��������
	}
	printf("The sum is %f\n", S);
	getchar();    
}


/*##################################################*/

#include <graphics.h>

main()
{
	initwindow (400, 300); // ������� ���� ��� ������� 400 � 300
	/*... ����� ����� �������� �� ������ ("����")*/
	getch();  // ���� ������� �������
	closegraph();  // ������� ����	
}


/*##################################################*/

#include <graphics.h>
main()
{
initwindow (440, 300);
setfillstyle (1, 9);
bar (100,100,300,200); // ����� �������������
setcolor (13); // � ���������� ������
rectangle (100,100,300,200);
moveto (100,100); // �����-�������
lineto (200, 50);
lineto (300,100);
setfillstyle (1, 14); // ������ ����� ������
floodfill (200, 75, 13);
setcolor (15);
circle (200, 150,50); // ����� ����������
setfillstyle (1, 10);
floodfill (200,150, 15); // ������� �������
setcolor (12);
outtextxy (100, 230, "Sharik's house.");
getch();
closegraph();
}


/*##################################################*/
#include <graphics.h>

void Tr (int x, int y, int c)
{
	moveto(x, y);        // ������ � ����� ������ ����
	lineto(x, y-60);     // ������ ������
	lineto(x+100, y);
	lineto(x,y);         
	setfillstyle(1, c);  // ������������� ���� �������
	floodfill(x+20, y-20, 15);  // ������� �� ����� �������
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
/*������. �������� ���������, ������� ������ ����� 
����� � ���������� ����� ��� ����. ������������ 
�������, ����������� ����� ���� �����.*/

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
/*������. ������ ����� N � ����������, ������� ��� 
��� ���. ������������ �������, ������� �������� �� 
���� ������.*/

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
	return 1;  // not found divisors � prime number
}


/*##################################################*/
/*������. �������� �������, ������� ���������� 
������������ � ����������� �� ���� ����� �����.*/

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
	setfillstyle(1, color);     // �������� �������, ���� color
	bar(x, y, x+20, y+20);      // ������� �������������
}

main()
{
	int x, y, code;                 // ��������� ��������
	initwindow(400, 400);     // ������� ���� ��� �������
	setfillstyle(1, COLOR(0, 0, 255));     // �������� �������, ����� ����
	bar (0, 0, 399, 399);     // ������ ���
	x = 0;  y = 240;          // ��������� ���������� ��������
    while ( x + 20 < 400 ) // ���� �� �������� ������� ����
    {
        if ( kbhit() ) // ���� ������ �������...
            if ( getch() == 27 ) break; // ���� Esc, ����� �� �����
        Draw ( x, y, COLOR(255,255,0) ); // ������ ������ �������
        delay ( 20 ); // ������� �� ���� (��������)
        Draw ( x, y, COLOR(0,0,255) ); // �������
        x ++; // ����������
    }
	closegraph();
}


/*##################################################*/
#include <graphics.h>
void Draw(int x, int y, int color)
{
	setfillstyle(1, color);     // �������� �������, ���� color
	bar(x, y, x+20, y+20);      // ������� �������������
}

main()
{
	int x, y, code;                 // ��������� ��������
	initwindow(400, 400);     // ������� ���� ��� �������
	setfillstyle(1, COLOR(0, 0, 255));     // �������� �������, ����� ����
	bar (0, 0, 399, 399);     // ������ ���
	x = 0;  y = 240;          // ��������� ���������� ��������
	while (1)
    {
        Draw ( x, y, COLOR(255,255,0) ); // ������ �������
        code = getch(); // ���� ������� �������
        if ( code == 27 ) break; // ���� Esc, �� �����
        Draw ( x, y, COLOR(0,0,255) ); // ������� �������
        switch ( code )             // ����� �����������
		{ 
            case 75: x --; break; // �����
            case 77: x ++; break; // ������
            case 72: y --; break; // �����
            case 80: y ++; // ����
        }
    }
	closegraph();
}


/*##################################################*/
#include <graphics.h>

void Draw(int x, int y, int color)
{
	setfillstyle(1, color);   // �������� �������, ���� color
	bar (x, y, x+20, y+20);   // ������� ������������� 20�20
}

main()
{
	int dx, dy, x, y, code;
	initwindow(400, 400);     // ������� ���� ��� �������
	setfillstyle(1, COLOR(0, 0, 255));     // �������� �������, ����� ����
	bar(0, 0, 399, 399);     // ������ ���
	x = 0;  y = 240;          // ��������� ���������� ��������
	dx = 1; dy = 0;           // ������� ��������� ������
	while (1)                 // ����������� ����
	{
		if ( kbhit() ) // ���� ������ �������...
        {
        	code = getch();     // �������� �� ���
            if ( code == 27 ) break; // ���� Esc, ����� �� �����
            switch (code)
            {
            	case 75: dx = -1; dy = 0; break;   // �����
            	case 77: dx = 1; dy = 0; break;    // ������
            	case 72: dx = 0; dy = -1; break;   // �����
            	case 80: dx = 0; dy = 1;           // ����
			}
		}
		
		Draw(x, y, COLOR(255,255,0));     // ������ �������
		delay(10);                        // ���
		Draw(x, y, COLOR(0,0,255));       // ������� �������
		x += dx;                          // ������� �������
		y += dy;
	}
	closegraph();
}


/*##################################################*/

/*�������� ����, �������� ������ � �������, �� ������ � 1 ���������.
����� - ������ �������� �� �������. ������� ����� ���������.*/

#include <graphics.h>

void Draw(int x, int y, int color)
{
    setfillstyle(1, color);    // ����� �������. 1 - ��������, ���� color
    bar(x, y, x+20, y+20);     // ������ ������������� (�������)
}

int Game()
{
    int dx, dy, code; // ����������� �������� �� ���� X � Y, ��� ������� � ����������
    int x, y;
	x = 0; y = 200; dx = 1; dy = 0; // �������� � ����� (0;200) ������
	/* (0 <= x < 380 && 0 <= y < 380) ���� ������� 20�20 �� ����� �� ����� ���� 400�400 */
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
		Draw(x, y, COLOR(255,255,0));  // ������ ������ �������
		delay(100);                     // �������� 10 ��
		Draw(x, y, COLOR(0,0,255));    // ������� ������� (����������� ������ ����)
		x += dx; y += dy;
		if (x < 0 || x > 380 || y < 0 || y > 380)    // ����� �� ������� ������
		{
            break;    // ����� �� ����
		}
	}
}


main()
{
	/*int x, y;   // ������� ���������� ������ �������� ����
	int dx, dy, code; // ����������� �������� �� ���� X � Y, ��� ������� � ���������� */
	initwindow(400, 400);  // ������� ���� ��� �������
	setfillstyle(1, COLOR(0,0,255)); // ����� ������ ���� �������� �����
    bar(0, 0, 399, 399);  // ������ ���� - ������ ������������� �� ��� �������
    Game();
    setfillstyle(1, COLOR(255,0,0)); // ����� ������ ���� �������� �����
    bar(0, 0, 399, 399);  // ������ ���� - ������ ������������� �� ��� �������
    getchar();
    closegraph();
}


/*##################################################*/

/*���� �� ������. */

#include <graphics.h>
#include <stdlib.h>
int random (int N) { return rand() % N; }  // �������

main()
{
    int x, y, R, G, B; 
    initwindow(500, 500);
    while ( ! kbhit() )         // ���� �� ������ ����� �������
    {
    	x = random(500);        // ��������� ����������
    	y = random(500);
    	R = random(256);       // ��������� ���� (R, G, B)
    	G = random(256);
    	B = random(256);
    	if ( getpixel(x,y) != 0 )    // ���� ����� �� ������� �����
    	    putpixel (x, y, 0);      // ������ �� ������
    	else                       // �����...
    	    putpixel (x, y, COLOR(R, G, B));   // ��������� ����
	}
	getch();
	closegraph();
}


/*##################################################*/




















