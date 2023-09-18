#include <stdio.h>

void tira(char s[],int c);

int main()
{
	char palur[] = "sakura";
	char mal = 'a';

	tira(palur,mal);

	printf("%s\n",palur);
}

void tira(char s[],int c )
{
	int j,i;

	for (i= j = 0;s[i] != '\0'; i++)// will run since s[i] is not
	{
		if(s[i] != c)// will execute if s[i] is different from c('a')
			{

			s[j++] = s[i];//each time a non-c occurs, it is copied into the j position.then the string is modified

			}
	}
	s[j] = '\0';

}
