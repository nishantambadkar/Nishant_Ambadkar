#include<stdio.h>
void main()
{
	int a[3], i;
	printf("enter 3 numbers");
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
}