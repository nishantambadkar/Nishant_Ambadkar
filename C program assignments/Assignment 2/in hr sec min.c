//wap to convert integer(in seconds)in hrs, min, sec

#include<stdio.h>
int main()
{
	int num, hr, min, sec;
	printf("enter integer");
	scanf("%d",&num);
	hr=num/3600;
	printf("in hours %d", hr);
	min=num/60;
	printf("\n in minutes %d", min);
	sec=num;
	printf("\n in sec %d",sec);
}