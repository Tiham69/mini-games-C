#include <stdio.h>

int main()
{

    int n;
    printf("Enter max loop number: ");
    scanf("%d", &n);

  	/*for(int i=0;i<n;i++)// first 1/2 with 1 in middlle
      {
          for(int j=1;j<i+1;j++) //prints first 1/3 of loop
          printf("%d ",n-j+1);

          for(int k=1;k<=2*(n-i)-1;k++)//prints 2nd quad of loop with previous one
          printf("%d ",n-i);

          for(int j=0;j<i;j++) //prints 1/2 of the pattern including 1
          printf("%d ",n-i+1+j);

          printf("\n");
      }*/

   for(int i=0;i<n-1;i++) //prints second 1/2 of the loop
      {

          for(int j=3+i;j<=n;j++)//
          printf("%d ",j);

          printf("\n");
      }


    return 0;
}
