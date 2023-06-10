#include <stdio.h>
#define MAXLINE 1000 // maximun input line size

int getLine(char line[],int maxline);
void copy(char to[],char from[]);

int main(){
	int len; // current line length
	int max; /*maximum length seen so far */
	char line[MAXLINE] ; /*current input line*/
	char longest[MAXLINE]; /*longest line saved here*/

	max = 0;
	while ((len = getLine(line,MAXLINE)) > 0 )
	{
		// comparação
		if(len > max)
		{
			max = len;

			copy(longest,line);
		}
	}

	if (max > 0) //there was a line
				 printf("%s\n",longest);

	return 0;
}

// getline : read a line into s, return lenght
int getLine(char s[], int lim)
{
	int c,i;

	for (i = 0; (i < lim - 1 && (c = getchar()) != EOF && c!='\n') ; ++i )
	{
		s[i] = c;
		/*
		** We use c!='\n' to stop scanning input characters when user enters a \n (newline) characteror
		** in other words,when user hits the enter key.why have
		** we used s[i]='\0' in and i++; statement in if(c=='\n') condition
		** i++ is used to increase the index value of the array/string
		** for one last time to accomadate the terminating '\0' null character.
		** s[i]='\0' is used to terminate\end the string with a null character.
		** This is essential for marking the end of the string and printing a
		** string within bounds (upto '\0' character)
		*/
		if (c == '\n') {
			s[i] = c;
			++i;
		}
	}
	/*
	** the condition if (c == '\n') is there because, as stated, c might not be equal to \n,
	** and in that case it shouldn't be added to s.
	** Lastly s must be null terminated (s[i] = '\0') so it can be properly interpreted as a string,
	** aka a null terminated char array. \n is not a null terminator, \0 is.
	 */
	s[i] = '\0';
	return i ;
}
/*copy : copy 'from' into 'to'; assume to is big enough*/

void copy(char to[],char from[])
{
	int i = 0 ;

	while ( (to[i] = from[i]) != '\0' )
	{
		++i;
	}
}
