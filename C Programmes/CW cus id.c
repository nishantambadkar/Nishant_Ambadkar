#include<stdio.h>
struct cust
{
	int id;
	char name[20],mo[10];
	
};
void main()
{
	int i,j;
	struct cust c[5];
	for(i=0;i<5;i++)
	{
		printf("enter cust id");
		scanf("%d",&c[i].id);
		printf("enter cust name");
		scanf("%s",&c[i].name);
		printf("enter cust mo no");
        scanf("%s",&c[i].mo);
    }
    for(j=0;j<5;j++)
    {
    	if(c[i].mo[9]==8 && c[i].mo[10]==8)
    	{
    		printf("cust id:%d cust name:%s cust mo:%d",c[i].id,c[i].name,c[i].mo);
		}
    
		
	}
}
