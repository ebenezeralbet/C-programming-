#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0xA7;
    uint8_t mode = 5;

    printf("Initial Register : 0x%02X\n", reg);

    if (mode > 7)
    {
        printf("Invalid Mode\n");
        return 1;
    }
    reg = (reg & ~(0x07U << 2)) | ((mode & 0x07U) << 2);

    printf("Final Register   : 0x%02X\n", reg);

    return 0;
}