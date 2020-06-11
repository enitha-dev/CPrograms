#include <stdio.h>
int main ()
{
	float x = 6;
	float y = 10;
	float sum;
	sum = x + y;
	printf ("the addition of 6 and 10 is %f \n",x+y);
	float a = 8;
	float b = 5;
	float sub;
	sub = a - b;
	printf ("the subraction of 8 and 5 is %f \n",a-b);
	float multiplication;
	multiplication = (x+y) * (a-b) ;
	printf ("the multiplication of 16 and 3 is %f \n",multiplication);
	float division;
	division = (x+y) / (a-b) ;
	printf ("the division of 16 and 3 is %f",division);
    return 0;
}	
