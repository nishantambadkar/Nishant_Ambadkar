#include<stdio.h>
void main()
{
	int n1, n2,res;
	printf("enter int 1 & int 2 ");
	scanf("%d %d",&n1,&n2);
	
	if(n1==30 || n2==30)
	{
		printf("True");
	}
	else
	if(n1+n2==30)
	{
		printf("true");
	}
    else
    {
    	printf("condition not satisfied");
	}
  	   
}