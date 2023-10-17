#include <stdio.h>

int bino(int x,int v[],int n);

int main(){
	int c, i, nwhite, nother,ndigit[10];
	nwhite = nother = 0;

	for(i=0;i<10;i++){
		ndigit[i] =0 ;
	}

	while ((c = getchar()) != EOF){
		switch (c) {
			case '0':case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				ndigit[c-'0']++;/*Ex : 9 = 57 | (57 - 48)= 9 | ndigit[9 + 1]
								 *a[i]++ increments the element at index i,
								 *it doesn't increment i. And a[i++] increments i,
								 *not the element at index i. */
				break;
			case ' ':
			case '\n':
			case '\t':
				nwhite++;
				break;
			default:
				nother++;
				break;

		}
	}
	printf("digits = ");
	for (i=0;i<10;i++) {
		printf("%d",ndigit[i]);
	}
	printf(",ws = %d, other = %d",nwhite,nother);

	return 0;

}
