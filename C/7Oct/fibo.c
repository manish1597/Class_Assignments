#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int fnm1 = fibonacci(n - 1);
    int fnm2 = fibonacci(n - 2);
    int fib = fnm1 + fnm2;
    return fib;
}

int main() {
    int n = 5; // Change this value to compute the Nth Fibonacci number
    printf("Nth Fibonacci number is (with O(2^n) exponential time complexity): %d\n", fibonacci(n));
    return 0;
} 