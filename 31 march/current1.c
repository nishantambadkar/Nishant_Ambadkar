#include<stdio.h>
#include<conio.h>
void main()
{
	int current,voltage,resistence;
	printf("enter value of voltage in volts");
	scanf("%d", &voltage);
	printf("enter value of resistence in ohm");
	scanf("%d", &resistence);
	current=voltage/resistence;
	printf("cuurent= %d amp",current);
	getch();
}
