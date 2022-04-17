#include<stdio.h>
void main()
{
	int num1, num2;
	printf("enter 1st no");
	scanf("%d",&num1);
	printf("enter 2nd no");
	scanf("%d",&num2);
	
	if(num1<num2)
	{
		printf("Numbers are in assending order");
	}
	else
	{
		printf("Numbers are in decending order");
	}
}