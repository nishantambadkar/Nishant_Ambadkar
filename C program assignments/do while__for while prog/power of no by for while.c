#include<stdio.h>
void main()
{
	int x,y, i, pow=1;
	printf("enter x and y value");
	scanf("%d %d", &x, &y);
	
	for(i=1;i<=y;i++)
	{
		pow=pow*x;
		
	}
	printf("power of given no is %d",pow);
}