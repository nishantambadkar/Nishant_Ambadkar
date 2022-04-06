#include<stdio.h>
#include<conio.h>
void main()
{
float m,g,h,pe;
g = 9.8;
printf("Enter mass in g ");
scanf("%f", &m);
printf("Enter height in m ");
scanf("%f",&h);
pe= m*g*h;
printf("potential Energy is %f J",pe);
getch();
}
