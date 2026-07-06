#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], sub[10][10], r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("\nEnter elements of First Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Second Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nFirst Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction Matrix (A - B):\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%4d", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}