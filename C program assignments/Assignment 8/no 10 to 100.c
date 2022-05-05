#include<stdio.h>
void main()
{
	int num;
	printf("enter integer value ");
	scanf("%d",&num);
	
	if(num>=10 && num<200)
	{
		printf("%d is true",num);
	}
	else
	{
		printf("%d is false",num);
	}
}