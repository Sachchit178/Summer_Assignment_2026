#include <stdio.h>
int main()
{
    int arr[100], i, j, n, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are:\n");
    for(i = 0; i < n; i++)
    {
        count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1; // Marking the duplicate element as -1 to avoid counting it again
            }
        }
        if(count > 1 && arr[i] != -1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}