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







