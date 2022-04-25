#include<stdio.h>
void main()
{
	int a[5], i;
	printf("enter 5 numbers");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("reverse order of numbers are");
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}