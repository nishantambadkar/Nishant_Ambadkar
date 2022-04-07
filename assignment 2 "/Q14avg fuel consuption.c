#include<stdio.h>
#include<conio.h>
void main ()
{
    int distance;
	float  fuel, avg;
    printf("Enter total distance travelled in km ");
    scanf("%d",&distance);
    printf("Enter fuel consumed in liter ");
    scanf("%f",&fuel);
    avg = distance/fuel;
    printf("avg consumption of fuel is %.2f km/lit ",avg);
}
