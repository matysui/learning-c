#include <stdio.h>

#define MAXLINE 1000 /*maximum input line length*/

int getLine(char line[], int max);
int strinDex(char source[],char searchfor[]);

char pattern[] = "ould"; /*pattern to searchfor */

/* find all lines matching pattern */
int main(){
    char line[MAXLINE];
    int found = 0;

    while(getLine(line,MAXLINE) > 0)
        if (strinDex(line,pattern) >= 0) {
            printf("%s",line);
            found++;
        }
    return found;
}

/*getLine : get line into s, return lenght*/
int getLine(char s[], int lim)
{
    int c,i;

    i = 0;
    while ( --lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/*strinDex : return index of t in s, -1 if none*/
int strinDex( char source[], char searchfor[]){
    int i,j,k;
    for ( i =0; source[i] != '\0'; i++) {

        for (j = i,k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++) /*compare each letter by incrementing k and j*/

        if (k > 0 && searchfor[k] == '\0')
            return i;
    }
    return -1;
}
