#include<stdio.h>
int main ()
{
	char x;
	printf("enter the letter");
	scanf("%c",&x);
	if (x == 97 || x== 101 || x == 105 || x == 111 || x == 117 )
	{
		printf("the given letter is vowel");
	}
	else 
	{
		printf ("the given letter is consonant");
	}
	return 0;
}