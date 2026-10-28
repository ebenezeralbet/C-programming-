#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t enable    = 1;
    uint8_t interrupt = 1;
    uint8_t mode      = 3;
    uint8_t priority  = 5;
    uint8_t reset     = 0;

    uint8_t CONTROL_REG = 0;

    // Construct the control register
    CONTROL_REG |= (enable    & 0x01U) << 0;
    CONTROL_REG |= (interrupt & 0x01U) << 1;
    CONTROL_REG |= (mode      & 0x03U) << 2;
    CONTROL_REG |= (priority  & 0x07U) << 4;
    CONTROL_REG |= (reset     & 0x01U) << 7;

    printf("CONTROL_REG : 0x%02X\n", CONTROL_REG);

    return 0;
}