#include <stdio.h>
int main()
{
    int a;
    float b,c;
    scanf("%d",&a);
    b=a%100;
    if(b==0)
    {
        c=a%400;
        if(c==0)
        {
            printf("���������ꡣ\n");
        }
        else
        {
            printf("���겻�����ꡣ\n");
        }
    }
    else
    {
        c=a%4;
        if(c==0)
        {
            printf("���������ꡣ\n");
        }
        else
        {
            printf("���겻�����ꡣ\n");
        }
    }
    return 0;
}
