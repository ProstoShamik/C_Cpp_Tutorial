#include <stdio.h>
#include <stdint.h>

int main()
{
    // IPO model

    // I - input
    uint32_t x = 5;

    // P - processing
    uint32_t y = x * x + 5 * x + 5;

    // O - output
    printf("f(%i) = %i", x, y);
}
