#include<stdio.h>
struct stud //structure creation by using struct keyword
{
	int id;
	char name[20];
};
void main()
{
	int i;
	struct stud s[4];
	for(i=0;i<4;i++)
	{
		printf("enter stud id");
		scanf("%d",&s[i].id);
		printf("enter stud name");
		scanf("%s",&s[i].name);
	}
	for(i=0;i<4;i++)
	{
		printf("\nstud id=%d",s[i].id);
		printf("\nstud id=%s",s[i].name);
	}
}
