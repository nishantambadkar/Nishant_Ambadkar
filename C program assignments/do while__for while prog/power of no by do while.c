#include<stdio.h>
void main()
{
	int x,y, i, pow=1;
	printf("enter x and y value");
	scanf("%d %d", &x, &y);
	i=1;
	do
	{
		pow=pow*x;
		i++;
	}while (i<=y);
	printf("power of given no is %d",pow);
}