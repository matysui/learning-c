#include <stdio.h>

int strLen( char string[] );
int trim (char string[] );
void getLine( char s[] );


int main(){
    char s[1000] = " ";
    getLine(s);
    trim(s);
    printf("%d\n",strLen(s));
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
