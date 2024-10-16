#include<stdio.h>
//int i=1;
void main()
{
	fun();
}
void fun()
{
static int i=1;//static used to prevent to display result from infinite times
if (i==10)
return;
	printf("%d",i);
	i++;
	fun();
	getch();
}
