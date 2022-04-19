#include<stdio.h>
void main()
{
	int num,i,m=0;
	printf("enter  any number \n");
	scanf("%d", &num);
	i=1;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			m=m+1;
		}
		
	}
	if(m==2)
	{	
	   printf("%d  is prime no",num);
	}
	else
	{
		printf("%d is not prime no", num);
	}
	   
}