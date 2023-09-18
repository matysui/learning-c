#include <stdio.h>

void junta();

int main(){

	char uma[] = "pato";
	char dos[] = "pateta";

	junta(uma,dos);

	printf("%s\n",uma);


}
void junta(char s[],char t[])
{
	int i,j;
	i = j = 0;
	while(s[i] != '\0')/*find end of s*/
		i++;/*i continue with the same value*/
	while ((s[i++] = t[j++]) != '\0')/*copy t*/
		;
}
