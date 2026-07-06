#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("\nEnter elements of Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%4d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}