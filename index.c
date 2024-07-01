#include <stdio.h>
#include <ctype.h>
//int isSpace(char s);
//int isDigit(char s);
double atoth(char s[]);
int main(){


    char n[] = "3.0";
    printf("%.2f \n",(atoth(n) + 6.0));


    return 0;
}

/*convert string s to double*/
double atoth(char s[])
{
    double val, power;
    int i, sign;

    for(i = 0; isspace(s[i]); i++) /*skip white space*/
        ;
    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
        i++;
    for(val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if ( s[i] == '.' )
        i++;
    for (power = 1.0; isdigit(s[i]); i++){
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }

    return sign * val / power;
}

// not working fix it
/*int isSpace(char s){
    if( s == ' ' || s == '\n' || s == '\t' )
        return 1;
    return -1;
}

int isDigit(char s) {
    if (s >= '0' && s <= '9')
        return 1;
    return -1;
}
*/
