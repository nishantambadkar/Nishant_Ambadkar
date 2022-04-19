#include<stdio.h>
void main()
{
	int num1, num2, i, add=0;
	printf("enter 1st num");
	scanf("%d",&num1);
	printf("enter 2nd num");
	scanf("%d",&num2);
	i=num1;
	do
	{
		if(i%17!=0)
		{
			printf("%d\n",i);
			add=add+i;
		}
		i++;
	}while(i<=num2);
	printf("addition of no betw %d and %d=%d",num1,num2,add);
}