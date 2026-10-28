#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t reg = 0x00;

    // SET bit 3
    reg |= (1 << 3);
    printf("After SET bit 3    : 0x%02X\n", reg);

    // SET bit 5
    reg |= (1 << 5);
    printf("After SET bit 5    : 0x%02X\n", reg);

    // CLEAR bit 3
    reg &= ~(1 << 3);
    printf("After CLEAR bit 3  : 0x%02X\n", reg);

    // TOGGLE bit 1
    reg ^= (1 << 1);
    printf("After TOGGLE bit 1 : 0x%02X\n", reg);

    // TEST bit 5
    if (reg & (1 << 5))
        printf("Bit 5              : SET\n");
    else
        printf("Bit 5              : CLEAR\n");

    return 0;
}