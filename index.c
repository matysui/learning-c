#include <stdio.h>

enum {false=0,true=1};

int espaco(char s);
int digitu(char s);
int cotoi(char s[]);
int main(){
	char s[] = "-32";
	printf("res = %d\n",(cotoi(s) + 30));
}

/*covert s to interger: version 2*/

int cotoi(char s[]){
	int i, n, sign;
	for (i = 0; espaco(s[i]); i++ )/*skip white space*/
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-') /*skip sign*/
		i++;
	for(n = 0; digitu(s[i]); i++)
			n = 10 * n +(s[i] - '0');
	return sign * n;
}


int espaco(char s){
	if(s == ' '|| s == '\n' || s == '\t'){
		return true;
	}
	return false;
}

int digitu(char s){
	if (s >= '0' && s <= '9'){
		return true;
	}
	return false;
}
