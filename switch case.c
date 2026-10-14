#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Red");
            break;

        case 2:
            printf("Blue");
            break;

        case 3:
            printf("Green");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}