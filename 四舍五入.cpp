#include <stdio.h>
#include <stdlib.h>
void Function(long double x);
int main()
{
	printf("����һ������������a�Ľ���ֵ�ĳ���\n");
	printf("������a��ֵ������ENTER��\n");
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
		printf("a�Ľ���ֵ��%d\n",c);
	}
	else
	{
		d=++c;
		printf("a�Ľ���ֵ��%d\n",d);
	}
}
