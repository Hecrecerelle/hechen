#include <stdio.h>
#include <limits.h>
int main()
{
    int a=0,c,d=0,e;
    e=INT_MAX;
    for(a;a<=e;a++)
    {
        c=a;
        for(;;)
        {
                if(c<1)
                {
                    if(a==d)
                        {

                            printf("%d\n",d);
                            break;
                        }
                        else
                        {
                            break;
                        }
                }
                else
                {
                    int b;
                    b=c%10;
                    c=c/10;
                    if(b==1)
                    {
                        d=d+1;

                    }
                }

        }
    }
    return 0;
}
