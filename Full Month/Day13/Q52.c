#include <stdio.h>
int main()
{
    int arr[100], i, n, evencount = 0, oddcount = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("The number of even elements in the array is: %d\n", evencount);
    printf("The number of odd elements in the array is: %d\n", oddcount);
    return 0;
}