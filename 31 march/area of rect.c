#include<stdio.h>
#include<conio.h>
void main()
{
	int length, width, area;
	printf("enter length in cm");
	scanf("%d",&length);
	printf("enter width in cm");
	scanf("%d", &width);
	area=length*width;
	printf("area of rectangle is %d sqcm", area);
}
