#include <stdio.h>
#include "incr.h"

#define GREETING "Hello, World\n"

struct pair {
    char b;
    int i;
    long long l;
} __attribute__((packed));

int main(void) {
    struct pair p = {.b = 1, .l = 2};

    printf("x is %d\n", p.i);
    printf("%p %p %p\n", &p.b, &p.i, &p.l);
}