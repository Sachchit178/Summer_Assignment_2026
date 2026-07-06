#include<stdio.h>
int main()
{
    int a[100],b[100],c[200],n1,n2,i,j,k;
    printf("Enter the size of first array:");
    scanf("%d",&n1);
    printf("Enter the elements of first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d",&n2);
    printf("Enter the elements of second array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    k=0;
    for(i=0;i<n1;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        c[k]=b[i];
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[i]==c[j])
            {
                for(int l=j;l<k-1;l++)
                {
                    c[l]=c[l+1];
                }
                k--;
                j--;
            }
        }
    }
    printf("The union of two arrays is:");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}