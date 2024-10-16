#include<stdio.h>
void fun1();
void main()
{
	fun1();
}
void fun1()
{
	int a=2,b=3;
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
void add(int x,int y)
{
	int r;
	r=x+y;
	printf("\n%d",r);
}
void sub(int x,int y)
{
	int r;
	r=x-y;
	printf("\n%d",r);
}
void mul(int x,int y)
{
	int r;
	r=x*y;
	printf("\n%d",r);
}
void div(int x,int y)
{
	int r;
	r=x/y;
	printf("\n%d",r);
}
