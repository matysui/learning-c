#include <stdio.h>
#include <string.h>

void reversar(char v[]);/* reverse string s in place */

int main(){
	char s[] = "tabu" ;
	reversar(s);
	printf("%s\n",s);
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
