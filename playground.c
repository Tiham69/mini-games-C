#include <stdio.h>

int main(void)
{
    int n;

    n = 7;

    for (int i = 0; i <= n; i += 1)
    {
        for (int j = n-i; j > 0; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
