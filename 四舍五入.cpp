#include <stdio.h>
#include <stdlib.h>
void Function(float x);
int main()
{
	printf("����һ���������뷨��a�Ľ���ֵ�ĳ���\n");
	printf("������a��ֵ������ENTER��\n");
	float a;
	scanf("%f",&a);
	Function(a);
	system("pause");
	return 0;
}
void Function(float x)
{
	float b;
	long int c,d,e;
	c=x;
	b=x-c;
    if(x>0)
    {
	if(b<0.5)
	{
		printf("a�Ľ���ֵ��%d\n",c);
	}
	else
	{
		printf("a�Ľ���ֵ��%d\n",++c);
	}
    }
    else
    {
        if(b>0.5)
        {
            printf("a�Ľ���ֵ��%d\n",c);
        }
        else
        {
            printf("a�Ľ���ֵ��%d\n",--c);
        }
    }
}

