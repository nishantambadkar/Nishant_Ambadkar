#include<stdio.h>
void main()
{
	int r,a,b,c;
	a=0;
	b=1;
	printf("ente r");
	scanf("%d",&r);
	printf("%d \n%d",a,b);
	c=0;
	do
	{
		c=a+b;
	    if(c<=r)
	    {
	    	printf("\n%d",c);
		}
		a=b;
		b=c;
	}while(c<=r);
}