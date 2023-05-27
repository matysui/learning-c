#include <stdio.h>

#include EOF 0

int main()
{
	int c ;

	while((c = getchar()) != EOF){
		putchar(c);
	}
}


/* type ctrl-D to provoke a "end-of-file"
 then after all the input has be read,getchar() will return EOF,
 and hence getchar() != EOF will be false, and the loop'll
 terminate */
