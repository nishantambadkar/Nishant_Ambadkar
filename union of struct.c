#include<stdio.h>
union stud
{
	
	char name[50];
	float id;
};
void main()
{
	union stud s1;
	printf("enter stud id");
	scanf("%f",&s1.id);
	
	printf("enter stud name");
	scanf("%s",&s1.name);
	
	printf("stud id=%f",s1.id);
	printf("stud name=%s",s1.name);
}