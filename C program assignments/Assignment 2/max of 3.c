//write a c program that accepts three integers and find the maximum of three


#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);
	printf("enter num3");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3)
	{
		printf("1st no %d is greater",num1);
	}
	else
	if(num2>num1 && num2>num3)
	{
		printf("2nd no %d is greater",num2);
	}
	else
	{
		printf("3rd no %d is greater",num3);
	}
}