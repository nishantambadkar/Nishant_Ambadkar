#include<stdio.h>

int fun(int x,int y)
{
	int r;
	r=x+y;
	return r;
}
int fun2(int x,int y)
{
	int r;
	r=x-y;
	return r;
}

void main()
{
	int a=2,b=4,res,sub;
	res=fun(a,b);
	printf("%d",res);
	sub=fun2(a,b);
	printf("%d",sub);
}
