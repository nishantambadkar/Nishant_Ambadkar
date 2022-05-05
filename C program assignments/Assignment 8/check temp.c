#include<stdio.h>
void main()
{
	int t1, t2;
	printf("enter tempr 1 and tempr 2\n");
	scanf("%d %d",&t1,&t2);
	
	if(t1<0 && t2>100)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}