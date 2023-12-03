#include <stdio.h>

#define MAX(a, b) if (a > b) { \
                    printf("a is greater\n"); \
                 } else { \
                    printf("b is greater\n"); \
                 }

int main() {
    int num1 = 10;
    int num2 = 20;

    MAX(num1, num2);

    return 0;
}
