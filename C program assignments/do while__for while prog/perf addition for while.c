#include<stdio.h>
void main()
{
	int num, sum, n;
	printf("enter a number");
	scanf("%d",&num);
	for(;num>0;)
	{
		n=num%10;
		num=num/10;
		sum=sum+n;
		
	}
	printf("sum of enter digits %d", sum);
}