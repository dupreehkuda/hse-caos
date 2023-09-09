#include <setjmp.h>
#include <stdio.h>

jmp_buf nonlocal_goto;

void baz(void) {
    printf("in baz\n");
    longjmp(nonlocal_goto, 1);
    printf("after longjmp\n");
}

void bar(void) {
    baz();
}

void foo(void) {
    printf("in foo\n");
    if (!setjmp(nonlocal_goto)) {
// return_address: // esp eax = 0
        bar();
    } else {
        puts("after longjmp");
    }
}

int main(void) {
    foo();
}