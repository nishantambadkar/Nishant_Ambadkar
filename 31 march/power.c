#include<stdio.h>
#include<conio.h>
void main()
{
int p,i,r;
printf("Enter current ");
scanf("%d", &i);
printf("Enter resistance ");
scanf("%d",&r);
p=i*i*r;
printf("Power = %d watt",p);
getch();
}
