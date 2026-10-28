#include <stdio.h>
#include <stdint.h>

int main(void)
{
    volatile uint8_t STATUS_REG = 0x00;

    printf("Waiting for sensor event...\n");

    // Simulate a hardware event
    STATUS_REG = 0x01;

    // Continuously monitor bit 0
    while ((STATUS_REG & (1U << 0)) == 0)
    {
        // Wait for sensor event
    }

    printf("Sensor Event Detected\n");

    return 0;
}