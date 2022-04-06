#include<stdio.h>
#include<conio.h>
void main()
{
int length, breadth, area;
printf("Enter length in m ");
scanf("%d", &length);
printf("Enter breadth in m ");
scanf("%d", &breadth);
area=length*breadth;
printf("Area of Rectangle is %d sqm", area);
getch();
}
