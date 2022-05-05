#include<stdio.h>
#include<string.h>
void main()
{
	int num[5],bak[5],s;
	printf("enter 5 digit integer");
	scanf("%s",num);
	
	strcpy(bak,num);// taking backup of name
	
	strrev(num);//reversing string strrev
	
	s=strcmp(bak,num);// compare reverse str with original string
	if(s==0)
	{
		printf("%s is pallindrome",bak);
	}
	else
	{
		printf("%s is not pallindrome",bak);
	}
}