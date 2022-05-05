#include<stdio.h>
void add();
void main()
{
	add();
}
void add()
{
	int num1,num2,res;
	printf("enter number ");
	scanf("%d",&num1);
	printf("enter number ");
	scanf("%d",&num2);
	
	res=num1-num2;
	printf("res = %d",res);
}