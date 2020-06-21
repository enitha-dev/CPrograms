#include <stdio.h>
int main ()
{
	char x;
	printf("enter the character");
	scanf("%c",&x);
	if ((x >= 97 && x <= 'z') || (x >= 65 && x <= 'Z'))
	{
		printf("the given character is an alphabet");
	}
	else
	{
		printf("the given character is not an alphabet"); 
	}
	return 0;
}