#include <stdio.h>


#define IN 1 /* inside a word */
#define OUT 0 /* outside a word/space,tab etc  */
//count lines,words, and characters in input
int main()
{
	int c ,nl, nw, nc,state;
	state = OUT ;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
// everytime this loop pass through a character nc will count a letter
		++nc;
		// detect a newline and increment
		if (c == '\n')
			++nl;
		// detect a spacebar, tab or newline and change the state
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT ;
		}
		//this will revert the stage to "inside a word" and increment nw-var
		else if (state == OUT) {
			state = IN ;
			++nw;
		}
	}
	printf("\n%d %d %d\n",nl,nw,nc);
}
