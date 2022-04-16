#include<stdio.h>
void main()
{
	int num, i, sq;
	printf("enter numbers");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		if(i%2==0)
		{
			sq=i*i;
			printf("square of %d= %d\n",i,sq);
		}
		i++;
	}
}