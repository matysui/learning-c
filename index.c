#include <stdio.h>

void tira(char s[],int c);

int main(){
	char palur[] = "sakura";
	char mal = 'a';
	tira(palur,mal);

	printf("%s\n",palur);
}

void tira(char s[],int c ){
	int j,i;
	for (i= j = 0;s[i] != '\0'; i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';

}
