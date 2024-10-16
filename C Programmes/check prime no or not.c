#include<stdio.h>
void main()
{
	int num,i,m=0;
	printf("enter  any number \n");
	scanf("%d", &num);
	i=1;
	while(i<=num)
	{
		if(num%i==0)
		{
			m=m+1;
		}
		i++;
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
