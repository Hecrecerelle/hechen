#include <stdio.h>
#include <stdlib.h>
void Function(double x);
int main()
{
	printf("����һ�����������������ֵ�����������С�����ֵĳ���\n");
	printf("���������ֲ���ENTER��\n");
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
	printf("��������ֵ�����������%d��С��������%f\n",c,b);
}
