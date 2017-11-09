#include <stdio.h>
int main()
{
    int a=100,b,c=1,d=0,e,i=0,j,k,l,m,n=0,o=0,p=0,q,r,s;
    for(a;a<=9999;a++)
    {
        e=a;
        for(;;)
        {
            b=e%10;
            e=e/10;
            c=c*b;//每一位的积
            d=d+b;//每一位的和
            if(e<1)
            {
                break;
            }
        }
        for(j=2;j<a;j++)
        {
            l=a%j;
            if(l==0)
            {
                o++;
            }

        }
        for(r=2;r<c;r++)
        {
            k=c%r;
            if(k==0)
            {
                o++;
            }
        }
        for(s=2;s<d;s++)
        {
            m=d%s;
            if(m=0)
            {
                o++;
            }
        }
            if(o==0)
            {
                q=a;//最大的超级素数
                p=p+a;//超级素数的和
                n++;//超级素数的个数
            }
        c=1;
        d=0;
        o=0;
    }
    printf("超级素数的个数是%d。\n所有的超级素数之和是%d。\n最大的超级素数是%d。\n",n,p,q);
    return 0;
}
