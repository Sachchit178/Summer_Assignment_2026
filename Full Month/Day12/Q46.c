#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
    int sum = 0, rem, a = n, digits = 0;
    while(a > 0)
    {
        digits++;
        a = a / 10;
    }
    a = n;
    while(a > 0)
    {
        rem = a % 10;
        sum += pow(rem, digits);
        a = a / 10;
    }
    return (sum == n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}