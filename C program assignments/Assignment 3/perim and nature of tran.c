#include<stdio.h>
#include<math.h>
void main()
{
	float a, b, c, p;
	printf("enter 1st side");
	scanf("%f", &a);
	printf("enter 2nd side");
	scanf("%f", &b);
	printf("enter 3rd side");
	scanf("%f", &c);
	p=a+b+c;
	printf("values are valid \nperimeter is %f",p);
	if(a!=b && a!=c && b!=c)
	{
		printf("\n trangle is scalen");
	}
	else
	if(a=b=c)
	{
		printf("\n trangle is equilateral");
    }  
	else
	{
		printf("\n trangle is isoscales");
	}
}