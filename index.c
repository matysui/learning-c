#include <stdio.h>
#define MAXLINE 1000 // maximun input line size

int max; /*maximum length seen so far */
char line[MAXLINE] ; /*current input line*/
char longest[MAXLINE]; /*longest line saved here*/


int getLine(void);
void copy(void);

int main(){
	int len; // current line length
	extern int max ;
	extern char longest[];
	max = 0;
	while((len = getLine()) > 0)
	{
		// comparação
		if(len > max)
		{
			max = len;
			copy();
		}
	}
	if (max > 0) //there was a line
				 printf("%s",longest);

	return 0;
}

int getLine(void){
	int c,i;
	extern char line[];
	for (i = 0;i < MAXLINE- 1 && (c =getchar()) != EOF && c != '\n';++i){
		line[i] = c ;
	}
// xD now i see
	if (c == '\n'){
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i ;
}

void copy(void){
	int i ;
	extern char line[],longest[];

	i = 0;
	while((longest[i] = line[i]) != '\0'){
		++i;
	}
}
