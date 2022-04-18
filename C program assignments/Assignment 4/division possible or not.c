#include<stdio.h>
void main()
{
	float num1, num2, res;
	printf("enter 1st no");
	scanf("%f",&num1);
	printf("enter 2nd no");
	scanf("%f",&num2);
	
	if(num2==0)
	{
		printf("division not possible\ndenominator shouldn't be zero'");
	}
	else
	{
		res=num1/num2;
		printf("result=%f",res);
	}
}