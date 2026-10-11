#include <stdio.h>

int main()
{
    int sw;

    printf("Enter switch value (0 or 1): ");
    scanf("%d", &sw);

    if (sw == 1)
        printf("LED ON");
    else if (sw == 0)
        printf("LED OFF");
    else
        printf("Invalid switch value");

    return 0;
}