#include<stdio.h>
void main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=5;c++)
		{
			printf("hi");
			if (r==2)
			continue;
			printf("%d",c);
		}
		printf("\n");
	}
}
