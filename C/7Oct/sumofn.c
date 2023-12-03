#include <stdio.h>

int sumofn(int n) {
    if (n == 1) {//sum of first natural number is 1
        return 1;
    }
    else{
        int sum = n+ sumofn(n-1);
        return sum;

    }
   
    
}

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Sum of First N Natural numbers (by recursion) is: %d\n", sumofn(n));
    return 0;
}
