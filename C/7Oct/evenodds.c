#include <stdio.h>

int sumOfEven(int n) {
    int even_sum = 0;
    for (int i = 2; i <= n; i += 2) {
        even_sum += i;
    }
    return even_sum;
}

int sumOfOdd(int n) {
    int odd_sum = 0;
    for (int i = 1; i <= n; i += 2) {
        odd_sum += i;
    }
    return odd_sum;
}

int main() {
    int n = 10;
    int even_sum = sumOfEven(n);
    int odd_sum = sumOfOdd(n);

    printf("Sum of first %d even natural numbers: %d\n", n, even_sum);
    printf("Sum of first %d odd natural numbers: %d\n", n, odd_sum);

    return 0;
}
