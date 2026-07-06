#include<stdio.h>
int palindrome(int n)
{
    int rev=0, rem, a = n;
    while(a>0)
    {
        rem = a%10;
        rev = rev*10 + rem;
        a = a/10;
    }
    return (rev == n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(palindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);
    return 0;
}