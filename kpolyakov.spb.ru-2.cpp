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


/*##################################################*/
/* Перестановка элементов массива наоборот - инверсия */

#include <stdio.h>

const int N = 10;

int main () {
	int i, c;
	int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for ( i = 0; i < N/2; i++ ) {
	    c = A[i];
		A[i] = A[N-1-i];
		A[N-1-i] = c;
	}
	
	printf ( "The result:\n" );
	for ( i = 0; i < N; i++ ) {
		printf ( "%d ", A[i] );
	}
	
	putchar ( '\n' );
	getchar();	
	return 0;
}


/*##################################################*/
/* Циклический сдвиг вправо  
[1, 2, 3, 4, 5] --> [5, 1, 2, 3, 4] */

#include <stdio.h>

const int N = 10;

int main () {
	int i, c;
	int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	c = A[N-1];
	for ( i = N-1; i > 0; i-- )
	    A[i] = A[i-1];
    
    A[0] = c;
	
	printf ( "The result:\n" );
	for ( i = 0; i < N; i++ ) {
		printf ( "%d ", A[i] );
	}
	
	putchar ( '\n' );
	getchar();	
	return 0;
}


/*##################################################*/
/* Array sorting - bubble method */

#include <stdio.h>

const int N = 10;

int main () {
	int i, j, c;
	int A[N] = {8, 5, 4, 2, 7, 0, 3, 78, 15, 1};
	
    for ( i = 0; i < N-1; i++ ) {
    	for ( j = N-2; j >= i; j-- ) {
    		if ( A[j] > A[j+1] ) {
    			c = A[j];
    			A[j] = A[j+1];     // change A[j] and A[j+1]
    			A[j+1] = c;
			}
		}
	}

	printf ( "The result:\n" );
	for ( i = 0; i < N; i++ ) 
	    printf ( "%d ", A[i] );
	
	printf ( "\n- - - - - - - - - -\n" );
	return 0;
}


/*##################################################*/
/* Array sorting - minimum element selection method */

#include <stdio.h>

const int N = 10;

int main () {
	int i, j, min;
	int A[N] = {8, 5, 4, 2, 7, 0, 3, 78, 15, 1};
	
	for ( i = 0; i < N; i++ ) {
		min = A[i];
		for ( j = i+1; j < N; j++ ) {
			if ( A[j] < A[i] ) {
				min = A[j];
				A[j] = A[i];
				A[i] = min;
			}
		}
	}
	
	printf ( "The result:\n" );
	for ( i = 0; i < N; i++ ) 
	    printf ( "%d ", A[i] );
	
	printf ( "\n- - - - - - - - - -\n" );
	return 0;
}


/*##################################################*/
/* Array sorting - minimum element selection method */

#include <stdio.h>

const int N = 10;

int main () {
	int i, j, nMin, c;
	int A[N] = {8, 5, 4, 2, 7, 0, 3, 78, 15, 1};
	
	for ( i = 0; i < N-1; i++ ) {
		nMin = i;
		for ( j = i+1; j < N; j++ ) {
			if ( A[j] < A[nMin] ) {
				nMin = j;
			}
	    }
	    
		if ( nMin != i ) {
			c = A[i];
			A[i] = A[nMin];
			A[nMin] = c;
		}
	}
	
	printf ( "The result:\n" );
	for ( i = 0; i < N; i++ ) 
	    printf ( "%d ", A[i] );
	
	printf ( "\n- - - - - - - - - -\n" );
	return 0;
}


/*##################################################*/
/* Double array search method in !!!SORTED!!! array*/

#include <stdio.h>

const int N = 20;

int main () {
	int x, L, R, m, flag=0;
	int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; // !!!SORTED ARRAY!!!!
	
	L = 0; R = N-1;
	
	printf ( "Input an element you serach: " );
	scanf ("%d", &x);
	
	while ( L <= R ) {
		m = (L + R) / 2;
		if ( A[m] == x ) {
			flag = 1;
			break;
		}
		if ( x < A[m] ) R = m - 1;
		else L = m + 1;    	
	}
   
    if (flag) 
        printf ( "x = %d is at A[%d]\n", x, m );
    else
        printf ( "x = %d not in A[]\n", x, m );
	
	return 0;
}


/*##################################################*/

int Sum ( int A[], int N ) {     // A[] – parameter-array; N - array size
	int i, sum;
	sum = 0;
	
	for ( i = 0; i < N; i++ )
		sum += A[i];
	
	return sum;
}


/*##################################################*/

main()
{
    int A[20], B[30], s;
    // здесь надо ввести массивы A и B
    s = Sum(A,20); // вычисляем сумму элементов массива A
    printf("Сумма массива A %d, массива B %d", s, Sum(B,30) ); // вычисляем сумму B прямо при выводе
}


/*##################################################*/

/* СИМВОЛЬНЫЕ СТРОКИ */
// Заканчиваются символом'\0'
char s[80] = "Привет, Вася!";
char s[] = "Привет, Вася!";
char *s = "Привет, Вася!";
const char PRIVET[] = "Привет, Вася!";


/*##################################################*/

#include <stdio.h> 

main () {
	char Name[50];
	printf ( "What is you name?\n" );
	//scanf ( "%s", Name );
	gets ( Name );
	//printf ( "Hello, %s\n", Name );
	puts ( "Hello," );
	puts ( Name );
	return 0;
}


/*##################################################*/
/* Задача. Ввести символьную строку и заменить в ней 
все буквы 'A' на буквы 'B'. */

#include <stdio.h>

int main () {
	char s[50];
	int i;
	printf ( "Input a string:\n" );
	gets ( s );
	
	i = 0;
	while ( s[i] != '\0') {
		if ( s[i] == 'A' )
		    s[i] = 'B';
		i++;
	}
	
	puts ( "The result:\n" );
	puts ( s );
	return 0;
}


/*##################################################*/

#include <stdio.h>
main()
{
    char s[80];
	FILE *fp;
	fp = fopen ( "input.dat", "r");
	fscanf ( fp, "%s", s );             //функция fscanf применяется тогда, когда надо читать файл по словам.
	printf ( "The first word - %s", s );
    fclose (fp);  
}


/*##################################################*/

#include <stdio.h>
main()
{
    char s[80];
	FILE *fp;
	fp = fopen ( "input.dat", "r");
    if ( NULL  == fgets ( s, 80, fp ) )
        printf ( "Failed to read line\n" );
    else printf ( "The first string - %s\n", s );
    fclose (fp);  
}


/*##################################################*/
/* Задача. В каждой строке файла input.dat заменить 
все буквы 'A' на 'Б' и вывести измененный текст в 
файл output.dat. */

#include <stdio.h>
const int N = 80;

int main () {
	char s[N];
	int i;
	FILE *fin, *fout;
	
	fin = fopen ( "input.dat", "r" );
	if ( fin == NULL ) {
		printf ( "[ERROR] No such file with data" );
		return 1;
	}
	
	fout = fopen ( "output.dat", "w" );
	
	while ( NULL != fgets ( s, N, fin ) ) {   // read line
		i = 0;
		while ( s[i] != '\0' ) {
			if ( s[i] == 'A' ) 
				s[i] = 'B';
            i++;
		}
	    fprintf ( fout, "%s", s );      // output a line to the file
	}
	
	fclose ( fin );
	fclose ( fout );
	return 0;
}


/*##################################################*/
#include <stdio.h>
#include <string.h>
int main () {
	int len;
	char s[] = "Prodigy";
	len = strlen(s);
	printf ( "The length of string %s is %d\n", s, len );
	return 0;
}


/*##################################################*/
/* Задача. В текстовом файле input.dat записаны 
строки текста. Вывести в файл output.dat
в столбик длины этих строк. */

#include <stdio.h>
#include <string.h>
int main () {
	FILE *fin, *fout;
	char s[80];
	
    fin = fopen ( "input.dat", "r" );
    if ( fin == NULL ) {
    	printf ( "[ERROR] No such file with data\n" );
    	return 1;
	}

    fout = fopen ( "output.dat", "w" );
    while ( NULL != fgets ( s, 80, fin ) )
    	fprintf ( fout, "%d\n", strlen ( s ) );    
    
    fclose ( fin );
    fclose ( fout );
	return 0;
}


/*##################################################*/
#include <stdio.h>
#include <string.h>
int main () {
    char s1[] = "Vasya";
    char s2[] = "Petya";
    if ( 0 == strcmp (s1, s2) ) 
        printf ( "Strings %s and %s are identical\n", s1, s2 );
    else printf ( "Strings %s and %s are different\n", s1, s2 );
    
	return 0;
}


/*##################################################*/
/* Задача. Ввести две строки и вывести их в 
алфавитном порядке. */
#include <stdio.h>
#include <string.h>
int main () {
    char s1[80], s2[80];
    int a, b;
    
    printf ( "Input a string #1: " );
	gets ( s1 );
	printf ( "Input a string #2: " );
	gets ( s2 );
	    
    if ( strcmp (s1, s2) < 0) 
        printf ( "%s\n%s\n", s1, s2 );
    else printf ( "%s\n%s\n", s2, s1 );
    
	return 0;
}


/*##################################################*/
/* Задача. Составить программу, которая определяет, 
сколько цифр в символьной строке. Программа должна 
работать только при вводе пароля «куку». */

#include <stdio.h>
#include <string.h>
int main () {
	int i, count;
    char s[80];
    char pwd[] = "kuku";
    
    do {
    	printf ( "Password: " );
        gets ( s );
	} while ( strcmp ( s,pwd )  );

    printf ( "Input the string: " );
    gets ( s );
    // printf ( "String has length %d", strlen( s ) );
    
    i = 0;
    count = 0;
    while ( s[i] != '\0' ) {
    	if ( s[i] >= '0' && s[i] <= '9' ) 
    	    count++;
    	i++;
	}
	
    printf ( "Your string contains %d digits\n", count ); 
	return 0;
}


/*##################################################*/
#include <stdio.h>
#include <string.h>
int main () {
    char s1[] = "ku-ku", s2[10];
	strncpy (s2, s1, 2);     // copy 2 symbols from s1 to s2
	puts ( s2 );       // ERROR! There is no '\0'
	s2[2] = '\0';      // add '\0'
	puts ( s2 );	   // output
}


/*##################################################*/
#include <stdio.h>
#include <string.h>
int main () {
    int n;
	char s1[80] = "Ivan Rozhdestvenskiy",
         s2[] = "Petrovich";
    n = strlen (s2);   // length of the second string
    strcpy (s1+5+n, s1+5);   // we try to push the string by n characters
    strncpy (s1+5, s2, n);   // insert s2 
    puts ( s1 );
}


/*##################################################*/
/* Задача. Ввести с клавиатуры фамилию и имя в одну 
строку (допустим, "Иванов Вася"). Построить в памяти 
строку «Привет, Вася Иванов!». */

#include <stdio.h>
#include <string.h>
int main () {
    int n, len;
	char s[80];
	char a[80] = "Hello, ";
	
	printf ( "Input SURNAME and NANE (ex.: Ivanov Petr):\n" );
	gets ( s );
		
	n = 0;
    while ( s[n] != ' ' && s[n] != '\0' )      // First space or the end of string
    	n++;                                   // length of the the first word - surname
       
    if ( s[n] != ' ' ) {             // if no space ...
    	printf ( "[ERROR] Wrong string!\n" );
    	return 1;
	}
        
    strcat ( a, s+n+1 );        // a[] = "Hello, Name\0"
    strcat ( a, " ");           // a[] = "Hello, Name \0"
    len = strlen ( a );         // a[len] = '\0'
    strncpy ( a+len, s, n );    // a[] = "Hello, Name Surname"
    strcpy ( a+len+n, "!" );    // a[] = "Hello, Name Surname!\0"
    
    puts ( a );
    return 0;
}


/*##################################################*/
#include <stdio.h>
#include <string.h>
int main () {
	char s1[] = "Mom was washing the frame",
	     s2[] = "War and peace", *p;
    p = strchr ( s1, 'a' );
    if ( p != NULL ) {
    	printf ( "The first letter a: number %d\n", p-s1 );
		p = strrchr( s1, 'a' );
		printf ( "The last letter a: number %d\n", p-s1 ); 
	}
	
	p = strstr ( s2, "and" );
	if ( p != NULL )
		printf ( "\nFound 'and' in %s at %d position\n", s2, p-s2 );
	else printf ( "\nThere is no word 'and' in %s\n", s2 );
	return 0;
}


/*##################################################*/
/* Задача. С клавиатуры вводится предложение и слово. 
Надо определить, сколько раз встречается это слово в 
предложении. */
#include <stdio.h>
#include <string.h>
int main () {
    char s[80], word[20], *p, *start;
    int count, len;
    
	puts ( "Input a sentence: " );
    gets ( s );
    puts ( "Input a word for search: " );
    gets ( word );
    len = strlen ( word );     // find a len of the word
    count = 0;    // counter of found words
    start = s;    //  start = s[0] - start of the string
	while ( 1 ) {
		p = strstr ( start, word );
		if ( p == NULL ) break;
		else {
			count++;
			start = p + len;
		}
	} 
    
    printf ( "The word %s meets %d times in the sentence\n", word, count);
	return 0;
}


/*##################################################*/






