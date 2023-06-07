#include <stdio.h>

#define MAXWL 20 // maximun length of a word
#define MAXNO 25 // MAXIMUN NO OF WORD IN A SENTENCE
int main()
{
	int word[MAXNO];
	int c, i, j, nc, nw;

	for (i = 0;i < MAXNO ;++i )
	{
		word[i] = 0;
	}

	nw = nc = 0;

	while((c = getchar()) != EOF)
	{
		//help to count the number of characteres
		++nc;
		// preparing for new word/ go to next element of the array/word
		if(c == ' '|| c == '\n' || c == '\t')
		{
			// -1 for excluding the space in the word length
			word[nw] = nc - 1 ;

			// resetting the word-lenght for next word
			++nw ;

			nc = 0;

		}
	}
// HISTOGRAM  ' ''*'' ''*'...
	for (i = MAXWL;i >= 1 ; --i ) // EXC 20v
	{
		//make the '''*''*'... lines
		for(j = 0; j <= nw; ++j )
		{
			// decide between ' ' or *
			// (i <= number-length)
			if (i <= word[j])
			{
				putchar('*');
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
