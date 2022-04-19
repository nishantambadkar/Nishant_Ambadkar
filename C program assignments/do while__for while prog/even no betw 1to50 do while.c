#include<stdio.h>
void main ()
{
	int i;
	i=1;
	do
	{
	   if(i%2==0)
	      {
	          printf("%d,",i);
          }
         i=i+1;
    }while(i<=50);
}