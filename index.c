#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word/space,tab etc  */

//A program that prints its input one word per line

int main()
{
	int c , state ;
	state = OUT ;

	while((c = getchar()) != EOF)
	{
		if (c == ' '|| c == '\n'|| c== '\t')
		{
			state = OUT;
			printf("\n");
		}
		else
		{

			state = IN;
			putchar(c);
		}
	}

	printf("%d ",state);
}
