#include<stdio.h>
#include<conio.h>
void main()
{
int num,n, n1 ,n2, n3,armstrong;
printf("Enter 3 digit number ");
scanf("%d", &num);
n1= num%10;
n=num/10;
n2=n%10;
n=n/10;
n3=n%10;
armstrong=n1*n1*n1+n2*n2*n2+n3*n3*n3;
if(num==armstrong)
{
printf("%d is Armstrong Number",num);
}
else
{
printf("%d isn't Armstrong Number",num);
}
}
