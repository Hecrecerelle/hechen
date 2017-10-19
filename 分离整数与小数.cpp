#include <stdio.h>
#include <stdlib.h>
void Function(double x);
int main()
{
	printf("这是一个用来分离输入数字的整数部分与小数部分的程序\n");
	printf("请输入数字并按ENTER键\n");
	double a;
	scanf("%lf",&a);
	Function(a);
	system("pause"); 
	return 0;
} 
void Function(double x)
{
	double b;
	long int c;
	c=x;
	b=x-c;
	printf("输入的数字的整数部分是%d，小数部分是%f\n",c,b);
}
