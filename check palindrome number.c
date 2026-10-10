#include <stdio.h>

int main()
{
    int n, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not a palindrome");
        return 0;
    }

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (n == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}