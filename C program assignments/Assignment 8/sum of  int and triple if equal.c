#include<stdio.h>
void main()
{
	int n1, n2,res;
	printf("enter int 1 & int 2 ");
	scanf("%d %d",&n1,&n2);
	
	res=n1+n2;
	
	if(n1==n2)
	{
		res=res*3;
	}
	printf("sum of integers = %d",res);
}