#include <stdio.h>
int main()
{
    int a=0,c,i,d=0;
    for(a;a<=999999;a++)
    {
        c=a;
        for(;;)
        {
                if(c<1)
                {
                    break;
                }
                else
                {
                    int b;
                    b=c%10;
                    c=c/10;
                    if(b==1)
                    {
                        d=d+1;
                        if(a==d)
                        {
                            printf("%d\n",d);
                        }
                    }
                }

        }
    }
    return 0;
}
