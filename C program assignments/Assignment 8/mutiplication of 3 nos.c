#include<stdio.h>
void main()
{
	int num1, num2, num3, res;
	printf("enter number 1, 2 and 3 ");
	scanf("%d %d %d",&num1, &num2, &num3);
	
	res=num1*num2*num3;
	printf("multiplication of %d %d %d is = %d",num1,num2,num3,res);
}