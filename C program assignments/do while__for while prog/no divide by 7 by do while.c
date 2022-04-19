#include<stdio.h>
void main()
{
	int num1, num2, i;
	printf("enter 1st num");
	scanf("%d",&num1);
	printf("enter 2nd num");
	scanf("%d",&num2);
	i=num1;
	do
	{
		if(i%7==2 || i%7==3)
		{
			printf("%d\n",i);
		}
		i++;
	}while(i<=num2);
}