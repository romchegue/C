#include <stdio.h>
#include <string.h>

void SortStrings ( char *s[], int n ); 

int main () {
    char s[20][80];   // array of 20 string
    char *ps[20];     // array of 20 string pointers
    int i, count = 0;
    
    printf ( "Input text (Enter - finish):\n" );
    
    for ( i = 0; i < 20; i ++ ) {
    	gets ( s[count] );
    	if ( s[count][0] == '\0' )
    	    break;
    	count++;
    }
   
    for ( i = 0; i < count; i++ )
        ps[i] = s[i];                 // put up pointers
     
    SortStrings ( ps, count );
   
    printf ( "#####\n" ); 
    for ( i = 0; i < count; i++ ) {
		puts ( ps[i] );             // output via pointers;
	}
}


void SortStrings ( char *s[], int n ) {  // *s[] - массив указателей; n - число строк
    char *p;
    int i, j;
    for ( i = 0; i < n-1; i++ )
        for ( j = n-1; j > i; j-- )
            if ( strcmp ( s[j-1], s[j] ) > 0 ) {
            	p = s[j];
            	s[j] = s[j-1];     // rearrangement of POINTERS
            	s[j-1] = p;
			}
}
