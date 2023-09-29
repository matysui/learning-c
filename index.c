#include <stdio.h>

void junta();
void putz();
int any(char s[],char t[]);

int main(){

	char uma[] = "cenabr";
	char dos[] = "pateta";

	int res ;
	res = any(uma,dos);
	printf("%d\n",res);
	return 0;

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

void putz(char s[], char t[]){
	int i,j;
	for (i=j=0;s[i] != '\0';i++){
		if (s[i] != t[i]){
			t[j++] = t[i];
		}
	}
	t[j] = '\0';
}

int any(char s[],char t[]){
	int i,j;
	for (i=j=0;s[i] != '\0';i++){
		if (s[i] == t[i]){
			return i;
			break;
		}

	}
		return -1;
}
