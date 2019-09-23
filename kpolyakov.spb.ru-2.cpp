/*##################################################*/
/*Задача. Ввести с клавиатуры массив из 10 элементов,
умножить все элементы на 2 и вывести полученный 
массив на экран.*/

#include <stdio.h>

const int N = 10;  // size of array

main()
{
	int i, A[N];
	printf("Input A array:\n");   // tip for input
	
	for (i = 0; i < N; i++)
	{
		printf("Input A[%d] > ", i);   // tip for input
		scanf("%d", &A[i]);      // input A[i]
	}
	
	for (i = 0; i < N; i++)
	    A[i] = A[i] * 2;      // multiply A[i] by 2
	    
	for (i = 0; i < N; i++)
	    printf("%d ", A[i]);   // output A[i]
	putchar('\n');
	getchar();
}


/*##################################################*/
#include <stdio.h>
#include <stdlib.h>

const int N = 10;

int random(int N) 
{
	return rand() % N;      // returns random numbers [0, N-1]
}

main()
{
	int i, A[N], a = -5, b = 10;
	float X[N];
	
	for (i = 0; i < N; i++)
	{
		A[i] = random(b-a+1) + a;                     // A[i] 
		X[i] = (float)rand() * (b-a) / RAND_MAX + a;   // X[i]
	}
	
	printf("Results:\n");
	for (i = 0; i < N; i++)
	{
		printf("A[%d] = %d, X[%d] = %f\n", i, A[i], i, X[i]);
	}
	getchar();
}


/*##################################################*/
/*Задача. Заполнить массив случайными целыми числами 
в интервале [-10,15], умножить все элементы на 2 и 
вывести на экран исходный массив и результат.*/

#include <stdio.h>
#include <stdlib.h>

const int N = 10;

int random(int N)
{
	return rand() % N;
}

int main()
{
	int i, A[N], A1[N], a = -10, b = 15;
	
	for (i = 0; i < N; i++)
	    {
	    	A[i] = random(b-a+1) + a;
	    	A1[i] = A[i] * 2;
		}
		
	printf("The result:\n");
	
	for (i = 0; i < N; i++)
	    {
	    	printf("(A[%d], A1[%d]) = (%d, %d)\n", i, i, A[i], A1[i]);	
		}    
	getchar();
}


/*##################################################*/
#include <stdio.h>

const int N = 10;

main()
{
	int i, n, A[N];
	
	FILE *fp;
	fp = fopen("test.txt", "r");
	if (fp == NULL)
	{
		printf("[!!!] No such with data ...");
		return 1;          // exit by error code 1
	}
	for (i = 0; i < N; i++)
	{
		n = fscanf(fp, "%d", &A[i]);  // n - count of symbols red from the file
		/* n=0 if data is uncorrect; n=-1 if the EOF*/
	}
	
	fclose(fp);
	for (i = 0; i < N; i++)
	    printf("A[%d] = %d\n", i, A[i]);
	getchar();	
}


/*##################################################*/

#include <stdio.h>

main()
{
    int x, n;
	FILE *fl, *fl1;
    fl = fopen("test.txt", "r");
    fl1 = fopen("result.txt", "w+");
    if (fl == NULL)
    {
    	printf("[!!!] No such file with data...\n");
    	return 1;
	}
	
	while (n != -1)
	{
		n = fscanf(fl, "%d", &x);
		if (n == 0)
		    printf("\n%d - error data! Not compatible format", x);
		else
		    fprintf(fl1, "%d\n", x);
	}
	
	fclose(fl);
	fclose(fl1);
	getchar();	
}


/*##################################################*/
/* Задача. Ввести массив из 10 целых чисел из файла 
input.dat, умножить каждый элемент на 2 и вывести 
в столбик в файл output.dat. */

#include <stdio.h>

const int MAX = 10;    // size of an array

int main () {
	FILE *fp; 
	int i, n, A[MAX], j;
	
	fp = fopen ( "input.dat", "r" );
	if ( fp == NULL ) {
		printf ( "ERROR: No such file with data\n" );
		return 1;
	}

	
	for ( i = 0; i < MAX; i++ ) {
		n = fscanf ( fp, "%d", &A[i] );
				
		if ( n == 0 ) {
			printf ( "ERROR: Function 'fscanf' from <stdio.h> returned 0 -\n- erroneous data received\n" );
		    return 2;
		}
		else if ( n == -1 ) {
		    printf ( "OK: The end of the file\n" );
		    break;
		}	
	}


	fclose ( fp );
	
	fp = fopen ( "output.dat", "w+" );
		
	for ( j = 0; j < i; j++) {
		fprintf ( fp, "%d\n", A[j] * 2);
		printf ("[TEST] Got %d\n", A[j] * 2);
	}
	
	fclose ( fp );
	
	return 0;
}


/*##################################################*/
/* Задача. Ввести массив из 10 целых чисел из файла 
input.dat, умножить каждый элемент на 2 и вывести 
в столбик в файл output.dat. */

#include <stdio.h>

const int N = 10;

int main () {
	int i, A[N];
	FILE *fp;
	
	fp = fopen ( "input.dat", "r" ); 
	
	if ( fp == NULL ) {             // error handling
		printf ( "ERROR: no such file with data\n" );    
		return 1;    // error code = 1
	}
	
	for ( i = 0; i < N; i++ ) {
		if ( 1 != fscanf (fp, "%d", &A[i]) ) {
			printf ("Not enough data");
			return 2;       // error code = 2
		}
	}
	
	fclose ( fp );
    
    for ( i = 0; i < N; i++ )
    	A[i] = A[i] * 2;
	
	fp = fopen ( "output.dat", "w" );
	
	for ( i = 0; i < N; i++ )
		fprintf ( fp, "%d\n", A[i] );

    fclose ( fp );
			
	return 0;
}


/*##################################################*/
/* Задача. В файле input.dat записаны в два столбика 
пары чисел (x,y). Записать в файл output.dat в 
столбик суммы x+y для каждой пары. */

#include <stdio.h>


int main (void) {
	FILE *fp1, *fp2;
	int x, y;
	
	fp1 = fopen ( "input.dat", "r" );
	if ( fp1 == NULL ) {
		printf ( "ERROR: No such file with data" );
		return 1;
	}
	
	fp2 = fopen ( "output.dat", "w" );
	
	while (1) {
		if ( 2 != fscanf(fp1,"%d%d",&x,&y) ) {
			printf ("[!!!]: incorrect data or EOF (End Of File)\n");
			break;
		}
		fprintf ( fp2, "%d\n", x+y );
		printf ( "%d\n", x+y );
		  
	}
	  
	fclose ( fp1 );
	fclose ( fp2 );
	
	return 0;
}


/*##################################################*/
/* Задача. Определить, есть ли в массиве элемент с 
заданным значением x, и, если он есть, найти его 
номер. */

#include <stdio.h>

const int N = 10;

int main () {
	FILE *fp;
	int x, i, n, A[N];
	bool f = 0;
	
	fp = fopen ( "input.dat", "r" );
	if ( fp == NULL ) {
		printf ( "[ERROR] No such file with data\n" );
		return 1;
	}
	    
	for ( i = 0; i < N; i++ ) {
		n = fscanf ( fp, "%d", &A[i]);
		if ( n != 1) {
			printf ( "[ERROR] Not enough numbers or EOF\n" );
		} else {
			printf ( "[TEST] A[%d] = %d\n", i, A[i] );	
		}   
		
	}
			
	fclose ( fp );
	
	printf ( "Input integer number: " );
	scanf ("%d", &x);
	
	for (i = 0; i < N; i++ )
		if ( A[i] == x ) {
			f = 1;
			break;
		}
			
    if (f)
        printf ( "%d is A[%d]\n", x, i );
    else 
        printf ( "%d is not in A\n", x);
    
	return 0;
}


/*##################################################*/
/* Задача. Определить, сколько в массиве 
положительных элементов и вывести их на экран. */

#include <stdio.h>

const int N = 10;

int main () {
    int i, count = 0;
    int A[N] = {0, -1, 2, -3, 4, -5, 6, -7, 8, -9};
    
    for ( i = 0; i < N; i++) {
    	if ( A[i] < 0) {
    		count++;
    		printf ( "A[%d] = %d is less than zero\n", i, A[i] );
		}
	}
    
    printf ( "Array A contains %d negative numbers\n", count );
	return 0;
}


/*##################################################*/
/* Задача. Сформировать новый массив B, 
включив в него все положительные элементы исходно-
го массива A, и вывести его на экран. */

#include <stdio.h>

const int N = 10;

int main () {
	int i, j = 0, count = 0;
	int A[N] = {0, -1, 2, -3, 4, -5, 6, -7, 8, -9};	
	
	for ( i = 0; i < N; i++ ) {
		if ( A[i] > 0 ) count++;
	}
	
	int B[count];
	for ( i = 0; i < N; i++ ) {
		if ( A[i] > 0 ) {
			B[j] = A[i];
			printf ( "B[%d] = %d\n", j, A[i] );
			j++;
		}
	}	
	
	for (i = 0; i < j; i++) 
	    printf ("%d\n", B[i]);
		
	return 0;
}


/*##################################################*/
/* Задача. Сформировать новый массив B, 
включив в него все положительные элементы исходно-
го массива A, и вывести его на экран. */

#include <stdio.h>

const int N = 10;

int main () {
	int i, B[N], count = 0;
	int A[N] = {0, -1, 2, -3, 4, -5, 6, -7, 8, -9};	
	
	for ( i = 0; i < N; i++ ) {
		if ( A[i] > 0 ) {
			B[count++] = A[i]; // Результат X++ - это значение Х
			//count++;
		}
	}
	
	printf ( "\nThe result:\n" );
	
	for ( i = 0; i < count; i++ ) 
	    printf ( "B[%d] = %d\n", i, B[i] );
	
	return 0;
}


/*##################################################*/
/*Задача. Найти и вывести на экран минимальный 
элемент в массиве A.*/

#include <stdio.h>

const int N = 10;

int main () {
	int A[N] = {0, -1, 2, -3, 4, -5, 6, -7, 8, -9};	
	int i, min;
	
	min = A[0];
	for ( i = 1; i < N; i++ ) {
		if ( A[i] < min )
		    min = A[i];
	}
	
	printf ( "The less number is: %d\n", min );
	
	return 0;
}


