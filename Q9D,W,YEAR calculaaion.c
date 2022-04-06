#include<stdio.h>
void main()
{
	int ndays, year, weeks, days, months;
	printf("enter ndays");
	scanf("%d", &ndays);
	year=ndays/365;
	weeks=ndays/7;
	days=ndays;
	months=ndays/30;
	printf(" year %d", year);
	printf("\n weeks %d",weeks);
	printf("\n days %d",days);
	printf("\n months %d", months);
}
