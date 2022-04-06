#include<stdio.h>
void main()
{
	int length, width, height, volume;
	printf("enter length in m");
	scanf("%d",&length);
	printf("enter width in m");
	scanf("%d", &width);
	printf("enter height in m");
	scanf("%d", &height);
	volume=length*width*height;
	printf("volume of cuboid= %d cu.cm" ,volume);
	getch();
}
