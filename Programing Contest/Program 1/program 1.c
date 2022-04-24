#include<stdio.h>
void main()
{
    int i,j,n;
    system("cls");
    printf("Enter number- ");
    scanf("%d",&n);

    if(n>0)
    {
    
        for(i=n; i>=1; i--)
        {
            //for upper left part
            for(j=n; j>=1; j--)
            {
                if(j>=i)
                printf("%d ",j);
                if(j<i)
                printf("%d ", i);

            }

            //for upper right part
            for(j=2; j<=n; j++)
            {
                if(j>=i)
                printf("%d ", j);
                if(j<i)
                printf("%d ", i);
            }
            printf("\n");
        }

        
        for(i=2; i<=n; i++)
        {
            //for lower left part
            for(j=n; j>=1; j--)
            {
                if(j>=i)
                printf("%d ",j);
                if(j<i)
                printf("%d ", i);

            }

            //for lower right part
            for(j=2; j<=n; j++)
            {
                if(j>=i)
                printf("%d ", j);
                if(j<i)
                printf("%d ", i);
            }
        
            printf("\n");
        }
    }
    else
    printf("Invalid Input \nplease run again and enter positive integer");
}