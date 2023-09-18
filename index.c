#include <stdio.h>

void deletaram(int s[], int c);
int main()
{
	int rato[] = {0,1,1,9,2};
	int c = 9;
	deletaram(rato,c);
	for(int i = 0; i < 5; ++i) {
		printf("%d\n", rato[i]);
	}
}

 void deletaram(int s[],int c)
	 {
		 int i ,j;

		 for (i = j = 0;i < 5;i++){
			 if(s[i] != c)
				 s[j++] = s[i];
		 }
	 }
