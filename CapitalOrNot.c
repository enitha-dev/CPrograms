#include <stdio.h>
int main ()
{
	char x;
	printf("enter the character");
	scanf ("%c",&x);
	if ((x >= 65)&&(x <= 'Z'))
	{
		printf ("the given alphabet is in capital");
	}
	else if ((x >= 97)&&(x <= 'z'))
	{
		printf ("the given alphabet is in small letters");
	}
	else 
	{
		printf("it's not an alphabet");
	}
	return 0;
}