#include <stdio.h>
int main()
{
    int i , j ;
    int a;
    printf("Enter Height: ");
    scanf("%d", &a);

    if(a > 0)
    {
        for(i = 1; i<a+1; i++)
        {
            for(j = 1; j<=i ; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nEnter a positive height.\n");
    }
}
