#include <stdio.h>

int main()
{
	int c ;
	c = getchar();
	// this loop will pass by each letter of textstream
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
}
