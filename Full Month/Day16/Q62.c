#include<stdio.h>
int main()
{
    int a[100],n,i,j,max_freq=0,freq_element;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>max_freq)
        {
            max_freq=count;
            freq_element=a[i];
        }
    }
    printf("The maximum frequency element is: %d\n",freq_element);
    return 0;
}