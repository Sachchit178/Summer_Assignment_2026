#include<stdio.h>
int main()
{
    int a[100],n,i,j=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[j++]=a[i];
        }
    }
    while(j<n)
    {
        a[j++]=0;
    }
    printf("The array after moving zeroes to end is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}