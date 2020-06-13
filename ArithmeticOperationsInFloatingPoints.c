#include<stdio.h>
int main ()
{
	float x;
	printf("enter the first number");
	scanf("%f",&x);
	float y;
	printf("enter the second number");
	scanf("%f",&y);
	printf ("the addition of %f and %f is %.2f \n",x,y,x+y);
	printf ("the subraction of %f and %f is %.2f \n",x,y,x-y);
	printf ("the multiplication of %f and %f is %.2f \n",x,y,x*y);
	printf ("the division of %f and %f is %.2f \n",x,y,x/y);
	return 0 ;
}