#include<stdio.h>
void main()
{
	int num, i, fact=1;
	printf("enter number");
	scanf("%d", &num);
	i=num;
	do
	{
		fact=fact*i;
		i--;
	}while(i>=1);
	printf("factorial is %d",fact);
}