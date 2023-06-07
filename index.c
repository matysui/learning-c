#include <stdio.h>


int main()
{
	int c ;

	while((c = getchar()) != EOF)
	{
		if(c == ' '|| c == '\n' || c == '\t')
		{
			putchar('\n');
		}
		// every time c is a characters-letter||number this will print a pipe
		else
		{
			putchar('|');
		}
	}
}
