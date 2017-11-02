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
            printf("今年是闰年。\n");
        }
        else
        {
            printf("今年不是闰年。\n");
        }
    }
    else
    {
        c=a%4;
        if(c==0)
        {
            printf("今年是闰年。\n");
        }
        else
        {
            printf("今年不是闰年。\n");
        }
    }
    return 0;
}
