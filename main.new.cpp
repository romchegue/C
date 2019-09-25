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


