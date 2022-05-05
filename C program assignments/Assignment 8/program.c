#include<stdio.h>
void add();
void main()
{
	add();
}
void add()
{
	int num1,num2,sum;
	printf("enter number ");
	scanf("%d",&num1);
	printf("enter number ");
	scanf("%d",&num2);
	
	sum=num1+num2;
	printf("sum = %d",sum);
}