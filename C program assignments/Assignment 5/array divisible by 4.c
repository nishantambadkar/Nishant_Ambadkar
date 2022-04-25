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
	printf("no divisible by 4 are ");
	for(i=0;i<5;i++)
	{
		if(a[i]%4==0)
		{
	     printf("%d\n",a[i]);
	     
	    }
    }
}
	