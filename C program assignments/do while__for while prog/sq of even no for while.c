#include<stdio.h>
void main()
{
	int num, i, sq;
	printf("enter numbers");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			sq=i*i;
			printf("square of %d= %d\n",i,sq);
		}
		
	}
}