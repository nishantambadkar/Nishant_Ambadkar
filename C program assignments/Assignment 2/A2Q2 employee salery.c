#include<stdio.h>
void main()
{
	int id, work_hr, amount_per_hr, salary;
	printf("enter 5 digit employee id");
	scanf("%d", &id);
	printf("enter work_hr");
	scanf("%d", &work_hr);
	printf("enter amount_per_hr");
	scanf("%d",&amount_per_hr);
	salary =work_hr * amount_per_hr;
	printf("salary of employee : Rs %d", salary);
}
