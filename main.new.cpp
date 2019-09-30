#include <stdio.h>

void Combinations ( int A[], int N, int K, int q );
void PrintData ( int Data[], int N );

main()
{
    int A[5], N = 3, K = 3;
    Combinations ( A, N, K, 0 );
}


void Combinations ( int A[], int N, int K, int q )
{
    if ( q == N ) // одна комбинация получена
        PrintData ( A, N );
    else
        for (int i = 1; i <= K; i ++ ) {
            A[q] = i;
            Combinations(A, N, K, q+1); // рекурсивный вызов
        }
}

void PrintData ( int Data[], int N )
{
    for (int i = 0; i < N; i++ )
        printf("%2d ", Data[i]);
    printf("\n");
}
