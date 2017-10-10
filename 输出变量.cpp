#include <stdio.h>
int main()
{
	int x=2.2;
	short y=0x7FFF,z=0xFFFF;
	unsigned short w=0xFFFF;
	float u=0.177;
	double max,min;
	max=1.7976931348623157E308; 
	min=-1.7976931348623157E308; 
	printf("x=%d\ny=%d\nz=%d\nw=%d\nu=%f\nThe largest number can double represent is %f.\nThe smallest number can double represent is %f.",x,y,z,w,u,max,min);
	return 0;
}
