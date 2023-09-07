#include "incr.h"

int x = 1;

int incr() {
    static int y = 3;
    y += 1;
    return y;
}