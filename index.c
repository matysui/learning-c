#include <stdio.h>


int main()
{
	int c,i,nwhite,nother;
	int ndigit[10];

	nwhite = nother = 0;

	for (i = 0; i <10;++i)
	{
		ndigit[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
		if(c >= '0' &&  c <= '9')
		{
			//ndigit[c-'0'] = ndigit[c-'0'] + 1 ;
			++ndigit[c - '0'];
			/*
			 Performing the subtraction c - '0' is equivalent to 0x35 - 0x30 which equals 0x05.
			 We then use this as the index into the array,
			 and increment the appropriate value with ++ndigit[c-'0'].
			when you type a '5' (I using single quotes to designate a character) at the keyboard,
			it is read in as a character (i.e. it has an ASCII value of 0x35). All characters are
			represented internally by an ASCII code. Now, the code for the charaacter zero, i.e. '0',
			is 0x30; the code for the character one is 0x31 and so on. In the subtraction, c - '0',
			we first convert both c and '0' to their numerical value and then perform the subtraction.
			the end result is changing the zero character into the number 0 (and so on),
			Think of an array as a series of boxes, each box is marked with a label. these labels
			run of 0 to one less then the number of boxes. Now, square brackets, like ndigit[4], is interpreted
			as get the value in the fifth box (remember we start counting at 0). Now a statement like ++ndigit[4]
			is equivalent to ndigit[4] = ndigit[4] + 1, which can be though of like "get the value in the fifth box,
			add one to and put it back into the fifth box". In the example ndigit array hold the number of times a digit
			is see in the input.	*/

		}

		else if (c == ' '|| c == '\n' || c == '\t')
			++nwhite;

		else
			++nother;
	}

	printf("digits = ");
	for (i = 0; i < 10; ++i)
	{
		printf(" %d" , ndigit[i]);
	}

	printf(",white space = %d, other = %d\n", nwhite, nother);
}
