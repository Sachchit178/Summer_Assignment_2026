#include <stdio.h>
int main()
{
    int arr[100], i, n, key, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }
    printf("The frequency of element %d in the array is: %d\n", key, count);
    return 0;
}