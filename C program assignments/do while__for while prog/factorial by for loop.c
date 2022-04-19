#include<stdio.h>
void main()
{
	int num, i, fact=1;
	printf("enter number");
	scanf("%d", &num);
	
	for(i=num;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("factorial is %d",fact);
}