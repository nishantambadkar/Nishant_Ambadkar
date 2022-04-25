#include<stdio.h>
void main()
{
	char r,c;
	for(r='A';r<='D';r++)
	{
		for(c='A';c<=r;c++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}