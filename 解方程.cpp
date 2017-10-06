#include <stdio.h>
#include <math.h>
int main(void) 
{
	printf("It's a program to find solution of equations like ax+by+c=0 and dx+ey+f=0\n");
	printf("please input the coefficient of x and y in the order of a,b,c,d,e,f and let the numbers separated by space.\n");
	float a,b,c,d,e,f,x,y;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	printf("The solution of equation is\n");
	printf("x=%f\n",(b*f-c*e)/(a*e-b*d));
	printf("y=%f\n",(a*f-c*d)/(b*d-a*e));
	return 0;
}
