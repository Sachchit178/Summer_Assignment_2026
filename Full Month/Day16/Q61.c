#include <stdio.h>
int main() {
    int a[100], n, i, sum = 0, total_sum;
    printf("Enter the size of array (n-1): ");
    scanf("%d", &n);
    printf("Enter the elements of array (from 1 to n): ");
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    total_sum = n * (n + 1) / 2; // Sum of first n natural numbers
    int missing_number = total_sum - sum;
    printf("The missing number is: %d\n", missing_number);
    return 0;
}