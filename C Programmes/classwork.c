//  wap to perform n digit no.
//  1)perform addition of all digit  2)reverse operation
//  3)armstrong no or not            4)pallindrome or not

#include<stdio.h>
void main()
{
	int num, sum, n;
	printf("enter a number");
	scanf("%d",&num);
	while(num>0)
	{
		n=num%10;
		num=num/10;
		sum=sum+n;
		
	}
	printf("sum of enter digits %d", sum);
}
	
