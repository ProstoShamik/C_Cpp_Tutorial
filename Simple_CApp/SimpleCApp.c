#include <stdio.h>
#include <stdint.h>

int32_t f(int32_t x);
void print_fx(int32_t x, int32_t y);

int main()
{
    // IPO model

    // I - input
    int32_t x = 5;

    // P - processing
    int32_t y = f(x);
    int32_t y2 = f(x * 2);
    int32_t y3 = f(x * 3);
    int32_t y4 = f(x * 4);

    // O - output
    print_fx(x, y);
    print_fx(x * 2, y2);
    print_fx(x * 3, y3);
    print_fx(x * 4, y4);
}

int32_t f(int32_t x)
{
    return x * x + 5 * x + 5;
};

void print_fx(int32_t x, int32_t y)
{
    printf("f(%i) = %i; ", x, y);
};