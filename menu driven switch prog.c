#include<stdio.h>
void main()
{
	int num1, num2, res, choice;
    printf("enter 1 or 2 or 3");
	scanf("%d", &choice);
	switch(choice)
    {
    	case 1:
    		printf("enter two num");
    		scanf("%d%d", &num1, &num2);
    		res=num1+num2;
    		printf("res=%d", res);
    	break;
    	case 2:
    		printf("enter two num");
    		scanf("%d%d", &num1, &num2);
    		res=num1-num2;
    		printf("res=%d", res);
    	break;
    	case 3:
    		printf("enter two num");
    		scanf("%d%d", &num1, &num2);
    		res=num1*num2;
    		printf("res=%d", res);
    	break;
    	case 4:
    		printf("enter two num");
    		scanf("%d%d", &num1, &num2);
    		res=num1/num2;
    		printf("res=%d", res);
    	break;
	}
}
