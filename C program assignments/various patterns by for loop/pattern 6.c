#include<stdio.h>
void main()
{
	int r,c,n=1;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",n);
			n=n+1;
		}
		printf("\n");
	}
}