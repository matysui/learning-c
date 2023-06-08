#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int celfa(int) ;

int main(){

	int fahr = LOWER;

	while (fahr <= UPPER) {
		int c = celfa(fahr);

		printf("%3.0d\t%3.0d\n",fahr,c);
		fahr += STEP ;
	}
}

int celfa(int fahr){
	//(5.0/9.0) * (f-32.0)
	int celsius = (5.0/9.0) * (fahr - 32.0) ;

	return celsius ;
}
