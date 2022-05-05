#include<stdio.h>
void main()
{
	int num;
	printf("enter positive no");
	scanf("%d",&num);

	if(num%3==0)
	{
		printf("%d is multiple of 3",num);
	}
	else
	if(num%7==0)
	{
		printf("%d is multiple of 7",num);
	}
	
    else
    {
    	printf("not multiple");
	}
  	   
}