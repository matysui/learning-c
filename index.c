#include <stdio.h>

int bino(int x,int v[],int n);
#define MAXLINE 1000

char line[MAXLINE];
void getLine(void);
void escapou(char s[],char t[]);
int main(){
	char s[MAXLINE];
	getLine();
	escapou(s,line);

	printf("%s\n",s);
	return 0;

}

void escapou(char s[],char t[]){
	int i,j;
	i = j = 0;
	while (t[i] != '\0') {/*In order to do that we need to escape them,the escaping is done by adding \ character*/
		switch(t[i]){
			case '\t':
				s[j++] = '\\';
				s[j] = 't';
				break;
			case '\n':
				s[j++] = '\\';
				s[j]= 'n';
				break;
			default:
					s[j] = t[i];
					break;
		}
		++i;
		++j;
		
	}
}

void getLine(void){ // get line into a string
	int c,i;
	extern char line[];
	i = 0;
	while((c = getchar()) != EOF && c != '\n'){
		line[i++] = c;
	}

	if(c == '\n'){
		line[i++] = c;
	}

	line[i] = '\0';
}
