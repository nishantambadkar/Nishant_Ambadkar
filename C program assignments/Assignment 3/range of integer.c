#include<stdio.h>
void main()
{
	int num;
	printf("enter integer");
	scanf("%d",&num);
	if(num>=0 && num<=10)
	{
		printf("entered number %d is in range of 0 to 10",num);
	}
    else
	if(num>=11 && num<=20)
	{
		printf("entered number %d is in range of 11 to 20",num);
	}
	else
	if(num>=21 && num<=30)
	{
		printf("entered number %d is in range of 21 to 30",num);
	}
	else
	if(num>=31 && num<=40)
	{
		printf("entered number %d is in range of 31 to 40",num);
	}
	else
	if(num>=41 && num<=50)
	{
		printf("entered number %d is in range of 41 to 50",num);
	}
	else
	if(num>=51 && num<=60)
	{
		printf("entered number %d is in range of 51 to 60",num);
	}
	else
	if(num>=61 && num<=70)
	{
		printf("entered number %d is in range of 61 to 70",num);
	}
	else
	if(num>=71 && num<=80)
	{
		printf("entered number %d is in range of 71 to 80",num);
	}
	else
	{
		printf("invalid no");
	}
}