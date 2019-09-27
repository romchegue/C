#include <stdio.h>
main () {
	int N, i, j, p;
	int *A;    // pointer for memory allocation
	printf ( "Size of array > " );
	scanf ( "%d", &N );
	A = new int [N];   // memory allocation
	if ( A == NULL) {
		printf ( "[ERROR] Can't allocate memory\n" );
		return 1;
	}
	for ( i = 0; i < N; i++ ) {
		printf ( "\nA[%d] > ", i+1 );
		scanf ( "%d", &A[i] );
	}
	
	for ( i = 0; i < N-1; i++ )
	    for ( j = N-1; j > i; j-- ) 
	        if ( A[j-1] > A[j] ) {
	        	p = A[j-1];
	        	A[j-1] = A[j];
	        	A[j] = p;
 			}
	
	puts ( "The result:\n" );    
	for ( i = 0; i < N; i++)
	    printf ( "%d ", A[i] );
	
	delete A;
}
