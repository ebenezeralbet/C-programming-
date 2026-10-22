#include <stdio.h>

int main()
{
    int switch_state;

    printf("Enter switch state (1=ON, 0=OFF): ");
    scanf("%d", &switch_state);

    if(switch_state == 1)
        printf("LED ON\n");
    else
        printf("LED OFF\n");

    return 0;
}