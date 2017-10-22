#include <stdio.h>
#include <stdlib.h>
void Function(float x);
int main()
{
	printf("这是一个四舍五入法求a的近似值的程序\n");
	printf("请输入a的值，并按ENTER键\n");
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
		printf("a的近似值是%d\n",c);
	}
	else
	{
		printf("a的近似值是%d\n",++c);
	}
    }
    else
    {
        if(b>0.5)
        {
            printf("a的近似值是%d\n",c);
        }
        else
        {
            printf("a的近似值是%d\n",--c);
        }
    }
}

