#include<stdio.h>
void main()
{
	int a=2,b=3;
	printf("a=%d b=%d",a,b);
	fun(&a,&b);
	printf("a=%d b=%d",a,b);
	
}
void fun(int *x,int *y)//star(pointer) is applied to store adress
{
	*x=12;
	*y=13;
}