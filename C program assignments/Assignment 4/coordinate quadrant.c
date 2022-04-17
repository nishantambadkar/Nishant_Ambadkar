#include<stdio.h>
void main()
{
	int x,y;
	printf("enter x coordinate");
	scanf("%d",&x);
	printf("enter y coordinaate");
	scanf("%d",&y);
	
	if(x>0 && y>0)
	{
		printf("coordinates belongs to quadrannt I");
	}
	else
		if(x<0 && y>0)
	{
		printf("coordinates belongs to quadrannt II");
	}
	else
	if(x<0 && y<0)
	{
		printf("coordinates belongs to quadrannt III");
	}
	else
	if(x>0 && y<0)
	{
		printf("coordinates belongs to quadrannt IV");
	}
	else
	if(x==0 && y==0)
	{
		printf("coordinates belongs to origin");
	} 
	
}