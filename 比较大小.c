#include <stdio.h>
#include <stdlib.h>
void Compare(float x,float y);
int main()
{
    printf("It's a program to compare two number(a and b)and print the larger one.\n");
    printf("Please insert two number and separated them by space.Then click ENTER.\n");
    float a,b;
    scanf("%f%f",&a,&b);
    Compare(a,b);
    system("pause");
    return 0;
}
void Compare(float x,float y)
{
    if(x>y)
    {
        printf("The larger number is %f\n",x);
    }
    else if(x==y)
    {
        printf("a equals b\n");
    }
    else
    {
        printf("The larger number is %f\n",y);
    }
}
