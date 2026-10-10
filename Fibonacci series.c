#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the number of terms (1-46): ");
    scanf("%d", &n);

    if (n < 1 || n > 46)
    {
        printf("Invalid input");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}