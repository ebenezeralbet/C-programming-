#include <stdio.h>

int main()
{
    int sensor;

    printf("Enter sensor value: ");
    scanf("%d", &sensor);

    if(sensor > 500)
        printf("High temperature\n");
    else
        printf("Normal temperature\n");

    return 0;
}