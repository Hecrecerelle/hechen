#include <stdio.h>
#include <stdlib.h>
void Function(float x);
int main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    c=a-b;
    Function(c);
    system("pause");
    return 0;
}
void Function(float x)
{
    if(x<=1e-6 && x>=-1e-6)
    {
        printf("a equals b.\n");
    }
    else
    {
        printf("a is diffrent from b.\n");
    }
}
