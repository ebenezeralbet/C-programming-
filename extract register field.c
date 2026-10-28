#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t STATUS_REG = 0xB5;


    uint8_t power    = STATUS_REG & 0x01;
    uint8_t mode     = (STATUS_REG >> 1) &  0x03;
    uint8_t speed    = (STATUS_REG >> 3) & 0x03;
    uint8_t error    = (STATUS_REG >> 5) & 0x01;
    uint8_t deviceID = (STATUS_REG >> 6) & 0x03;

    printf("Power : %s\n", power ? "ON" : "OFF");
    printf("Mode  : %u\n", (unsigned)mode);
    printf("Speed : %u\n", (unsigned)speed);
    printf("Error : %s\n", error ? "ON" : "OFF");
    printf("Device ID : %u\n", (unsigned)deviceID);

    return 0;
}