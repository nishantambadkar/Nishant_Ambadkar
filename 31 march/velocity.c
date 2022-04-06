#include<stdio.h>
#include<conio.h>
void main()
{
	float v, d, t;
	printf("enter value of d");
	scanf("%f", &d);
	printf("enter value of t");
	scanf("%f", &t);
	v=d/t;
	printf("velocity =%f m/s",v);
	getch();
}
