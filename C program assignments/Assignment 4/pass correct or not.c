#include<stdio.h>
void main()
{
	int num;
	printf("enter password");
	scanf("%d",&num);
	if(num==1234)
	{
		printf("correct password");
	}
	else
	{
		printf("incorrect password");
	}
}