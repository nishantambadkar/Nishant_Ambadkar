#include<stdio.h>
void main()
{
	int num, n1, n2, n3, rev, res;
	printf("enter 3 digit number");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	rev=n1*100+n2*10+n3*1;
	printf("reverse = %d", rev);
	res=n1+n2+n3;
	printf("addition of num is %d",res);
	getch();
}
