#include<stdio.h>
int main()
{
	int num, yrs, mon, days;
	printf("enter days");
	scanf("%d",&num);
	yrs=num/360;
	printf("in years %d", yrs);
	mon=num/30;
	printf("\n in months %d", mon);
	days=num;
	printf("\n in days %d",days);
}