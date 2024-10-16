#include<stdio.h>
#include<conio.h>
void main()
{
	int height, width, area, perimeter;
	printf("enter height in inch");
	scanf("%d",&height);
	printf("enter width in inch");
	scanf("%d", &width);
	area=height*width;
	perimeter=2*(height+width);
	printf("area of rectangle is %d sqinch", area);
	printf("\nperimeter of rectangle is %d inch", perimeter);
}
