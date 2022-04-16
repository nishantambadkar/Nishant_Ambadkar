#include<stdio.h>
#include<conio.h>
void main ()
{
    float num1, num2 ,num3 ,num4, num5,psum=0, sum=0, avg;
    printf("Enter 5 numbers\n");
    scanf("%f %f %f %f %f",&num1, &num2, &num3, &num4, &num5);
    if(num1>0)
    {
        psum=psum+1;
        sum=sum+num1;
    }

    if(num2>0)
    {
        psum=psum+1;
        sum=sum+num2;
    }

    if(num3>0)
    {
        psum=psum+1;
        sum=sum+num3;
    }

    if(num4>0)
    {
        psum=psum+1;
        sum=sum+num4;
    }

    if(num5>0)
    {
        psum=psum+1;
        sum=sum+num5;
    }

    avg=sum/psum;
    printf("positive numbers = %f \n average of all positive numbers= %f",psum,avg);

}