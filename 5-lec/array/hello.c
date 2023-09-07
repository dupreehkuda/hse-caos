#include <stdio.h>
#include "incr.h"

#define GREETING "Hello, World\n"

#define ARRLEN(a) (sizeof(a) / sizeof ((a)[0]))

int strlen(char* s) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

int main(void) {
    int arr[10] = {[0] = 3, [5] = 5};
    int *ptr = &arr[0];
    short shint = 7;

    int result = scanf("%hd", &shint);
    if (result != 1) {
        printf("error\n");
        return 1;
    }

    printf("%d %hd\n", result, shint);

    for (int i = 0; i < ARRLEN(arr); i++) {
        printf("%d\n", ptr[i]);
    }

    // stack
    char str[] = "hello world\n";
    str[0] = 'H';

    // .rodata seg fault
    //  char *str = "hello world\n";
    //  str[0] = 'H';

    printf("%d %s", strlen(str), str);
}
