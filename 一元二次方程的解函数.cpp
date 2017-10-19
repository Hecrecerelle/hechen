#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void Function(float x,float y,float z,float p,float q,float t); 
int main(void) 
{
	printf("It's a program to find solution of equations like ax+by+c=0 and dx+ey+f=0\n");
	printf("please input the coefficient of x and y in the order of a,b,c,d,e,f and let the numbers separated by space.\n");
	float a,b,c,d,e,f;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    Function(a,b,c,d,e,f);
	system("pause");
	return 0;
}
void Function(float x,float y,float z,float p,float q,float t)
{
    printf("The solution of equation is\n");
	printf("X=%f\n",(x*t-z*q)/(x*q-y*p));
	printf("Y=%f\n",(x*t-z*p)/(y*p-x*q));
}
