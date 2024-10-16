#include<stdio.h>
#include<conio.h>
void main()
{
	int pie, r, P, A;
	pie=3.14;
	printf("enter r");
	scanf("%d", &r);
	A=pie*r*r;
	P=2*pie*r;
	printf("area of circle is %d",A);
	printf("\nperimeter of circle is %d",P);
}
