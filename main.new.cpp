#include <stdio.h>
#include <graphics.h>
int main()
{
    char s[80];
    int x, y;
    FILE *fp;
    fp = fopen ( "input.dat", "r" );
	while ( fgets ( s, 80, fp ) )
	    if ( s[0] == '#' ) {
	    	sscanf ( s+1, "%d%d", &x, &y );
			break; 
		}
	fclose ( fp );
	printf ( "x = %d, y = %d", x, y );
}
