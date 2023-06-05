#include <stdio.h>

//count lines in input
int main()
{
	int c ,nl;
	nl = 0 ;

	while ((c = getchar()) != EOF){
		//everytime you press enter/'\n' this will happen
		if (c == '\n'){
			++nl;
		}
	}
	printf("%d\n",nl);
}
