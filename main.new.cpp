#include <stdio.h>
#include <string.h>
main()
{
char pass[] = "kuku", // правильный пароль
s[80]; // вспомогательная строка
int i, count = 0;
printf ("Password: ");
gets(s);
if ( strcmp ( pass, s ) != 0 )
{
printf ( "wrong password\n" );
return 1; // выход по ошибке, код ошибки 1
}
printf ("Input a string: ");
gets(s);
i = 0;
while ( s[i] != '\0' ) {
if ( s[i] >= '0' && s[i] <= '9' )
count ++;
}
printf("\nFound %d digits", count);
}
