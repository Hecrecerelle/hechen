#include <stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
            {
                printf("%f\n%f\n%f\n",a,b,c);
            }
            else
            {
                printf("%f\n%f\n%f",a,c,b);
            }
        }
        else
        {
            printf("%f\n%f\n%f\n",c,a,b);
        }
    }
    else
    {
        if(b>c)
        {
            if(a>c)
            {
                printf("%f\n%f\n%f\n",b,a,c);
            }
            else
            {
                printf("%f\n%f\n%f\n",b,c,a);
            }
        }
        else
        {
            printf("%f\n%f\n%f\n",c,b,a);
        }
    }
    return 0;
}
