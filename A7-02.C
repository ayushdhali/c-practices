#include <stdio.h>
int main()
{
    int i, j, n,k;
    printf("\n Give number of rows:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            for (k = (n-1); k <= i; k++)
        {
            printf(" ");
        }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}