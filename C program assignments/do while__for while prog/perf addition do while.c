#include<stdio.h>
void main()
{
	int num, sum, n;
	printf("enter a number");
	scanf("%d",&num);
	do
	{
		n=num%10;
		num=num/10;
		sum=sum+n;
		
	}while(num>0);
	printf("sum of enter digits %d", sum);
}