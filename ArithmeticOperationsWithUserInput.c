#include<stdio.h>
int main ()
{
	float x,y;
	printf("Enter the First Number");
    scanf ("%f",&x);
		printf("Enter the Second Number");
	    scanf ("%f",&y);
	printf ("the given number is %f and %f \n",x,y);
	printf ("the addition of %f and %f is %f \n",x,y,x+y);
	printf ("the subraction of %f and %f is %f \n",x,y,x-y);
	printf ("the multiplication of %f and %f is %f \n",x,y,x*y);
	printf ("the division of %f and %f is %f",x,y,x/y);
	return 0;
}