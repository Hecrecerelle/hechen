#include <stdio.h>
#include <stdlib.h>
void Function(long double x);
int main()
{
	printf("这是一个四舍五入求a的近似值的程序。\n");
	printf("请输入a的值，并按ENTER键\n");
	double a;
	scanf("%lf",&a);
	Function(a);
	system("pause");
	return 0;
}
void Function(long double x)
{
	long double b;
	long int c,d;
	c=x;
	b=x-c;
	if(b<0.5)
	{
		printf("a的近似值是%d\n",c);
	}
	else
	{
		d=++c;
		printf("a的近似值是%d\n",d);
	}
}
