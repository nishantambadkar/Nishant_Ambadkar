#include<stdio.h>
void main()
{
	int n,diff;
	printf("enter value of n = ");
	scanf("%d",&n);
	
	diff=n-51;
	
	if(n>51)
	{
		diff=diff*3;
	}
	printf("difference of integers = %d",diff);
}