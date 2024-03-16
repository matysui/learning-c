#include <stdio.h>

int strLen( char string[] );
int trim (char string[] );
void getLine( char s[] );
void squeeze( char s[], int n );
int isSpace(char s);
int isDigit(char s);
void reversar(char v[]);
void strCat(char s[], char t[]);

int main(){
}

/* strcat:  concatenate t to end of s; s must be big enough */
void strCat(char s[], char t[]){
    int i, j ;
    i = j = 0;

    while( /*s[i] != '\n'*/ s[i] != '\0') /* if change to '\n' pay atenton in order of logic operators.
                                           *finde de end of s */
        i++;
    while((s[i++] = t[j++]) != '\0') /*copy t*/
        ;
}

/* reverse string s in place */
void reversar(char v[]){
    int c, i, j;
    for (i = 0, j = strLen(v)-1; i < j; i++, j--)
        c = v[i], v[i] = v[j] , v[j] = c ;
}


int isSpace(char s){
    if( s == ' ' || s == '\n' || s == '\t' )
        return 1;
    return -1;
}

int isDigit(char s) {
    if (s >= '0' && s <= '9')
        return 1;
    return -1;
}

/* squeeze:  delete all c from s */
void squeeze( char s[], int c){
    int j,i;
    for (i = j = 0; s[i] != '\0' ; i++)
        if(s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}
/* trim:  remove trailing blanks, tabs, newlines from the end of the string*/
int trim (char s[]){
    int n;
    for (n = strLen(s)-1; n >= 0; n--){
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n' ) /*identifies non-whitespace*/
            break ;
    }
    s[n+1] = '\0'; /* cut the array */
    return n;

}

int strLen(char t[]){
    int i ;
    for (i = 0; t[i] != '\0' ; i++ )
        ;
    if (i > 0) { return i;}
    else {return -1;}
}

void getLine( char s[]) {
    int c, i=0 ;

    while((c = getchar()) != EOF && c != '\n'){
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';
}
