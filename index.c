#include <stdio.h>

//count the caracters in input ; 1st edition
int main()
{
	long nc = 0;
	while ( getchar() != EOF){
		++nc;
		printf("%ld\n",nc);
	}
}
