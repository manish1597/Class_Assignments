#include <stdio.h>

void sumOf(int n, int *even_sum, int *odd_sum) {
    *even_sum = 0;
    *odd_sum = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            *even_sum += i; 
        } else {
            *odd_sum += i;  
        }
    }
     
}  

int main() {
    int n = 10;
    int even_sum, odd_sum;
     
    sumOf(n, &even_sum, &odd_sum);

    printf("Sum of first %d even natural numbers: %d\n", n, even_sum);
    printf("Sum of first %d odd natural numbers: %d\n", n, odd_sum);

    return 0;
}
