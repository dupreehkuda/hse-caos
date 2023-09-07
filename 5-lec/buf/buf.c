#include <stdio.h>

int main(void) {
    char buf[30] = {0};

    int result = scanf("%29s", buf);
    if (result == EOF) {
        printf("eof\n");
        return 1;
    }

    printf("%s\n", buf);
}