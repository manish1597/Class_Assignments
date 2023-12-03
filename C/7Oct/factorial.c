#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else{
    int fact = n * factorial(n - 1);
    return fact;
    }

}

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("The Factorial of the given number is: %d\n", factorial(n));
    return 0;

}