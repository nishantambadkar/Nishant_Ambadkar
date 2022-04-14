#include<stdio.h>
void main()
{
	int num, d1,d2,d3,d4,d5,ores=0;
	printf("enter 5 digit number");
	scanf("%d",&num);
	d1=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d3=num%10;
	num=num/10;
	d4=num%10;
	num=num/10;
	d5=num%10;
	if(d1%2!=0)
	{
		ores=ores+d1;  
	}
	if(d2%2!=0)
	{
		ores=ores+d2;  
	}
	if(d3%2!=0)
	{
		ores=ores+d3;  
	}
	if(d4%2!=0)
	{
		ores=ores+d4;  
	}
	if(d5%2!=0)
	{
		ores=ores+d5;  
	}
	
	printf("\n sum of odd no %d",ores);
	
	

}
   
	

