#include<stdio.h>
void main()
{
	int a[5], i, sum=0;
	printf("enter 5 numbers");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	sum=sum+a[i];
	}
	printf("addition of elements = %d ",sum);
}