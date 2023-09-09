#include <stdint.h>
#include <stdio.h>

uint32_t bswp(uint32_t x) {
    asm("bswap %0" : "+r"(x));
    return x;
}

uint32_t popcnt(uint32_t x) {
    uint32_t result;

    asm("popcnt %1, %%ecx\n\t"
        "mov %%ecx, %0"
        : "=r"(result)
        : "rm"(x)
        : "ecx");

    return result;
}

int main(void) {
    uint32_t x = 0xdeadbeef;
    printf("%x\n", bswp(x));

    uint32_t y;
    if (scanf("%i", &y) == 1) {
        printf("%d\n", popcnt(y));
    }
}