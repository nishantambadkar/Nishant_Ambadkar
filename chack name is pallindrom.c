#include<stdio.h>
#include<string.h>
void main()
{
	char name[10],bak[10],s;
	printf("enter any name ");
	scanf("%s",name);
	
	strcpy(bak,name);// taking backup of name
	
	strrev(name);//reversing string strrev
	
	s=strcmp(bak,name);// compare reverse str with original string
	if(s==0)
	{
		printf("%s is pallindrome",bak);
	}
	else
	{
		printf("%s is not pallindrome",bak);
	}
}