#include <stdio.h>
#include <string.h>

void reversar(char v[]);/* reverse string s in place */
void convy(int n,char s[]);
int main(){
	char s[] = "tabu" ;
	convy(-732,s);
	printf("\n%s\n",s);
}


void reversar(char v[]){
	int c,i,j;

	for ( i = 0, j = strlen(v)-1  ; i < j ; i++, j-- ) {
		c = v[i], v[i] = v[j], v[j] = c;
		/*Comma operator should be used  sparingly,the most suitable uses are for constructs stringly related to
		 * each other and in macros where a multstep computation has to be a single expression.
		 *or where the exchange can be thought of as a sigle operation. */
	}
}

/*convert n to characters in s*/
void convy(int n,char s[]) { /*converts a number to a character string*/
	int i,sign;

	if ((sign = n) < 0) /*record sign*/
		n = -n;         /*make n positive*/

	i = 0;

	do /*generate digits in reverse order*/
	{s[i++] = n % 10 + '0';/*get next digit*/
	} while((n/=10) > 0); /*delete it*/

	if(sign < 0)
		s[i++] = '-';

	s[i] = '\0';
	reversar(s);
}
