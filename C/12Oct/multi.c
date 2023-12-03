#include <stdio.h>

int main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");

   
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    
    for (int i = 0; i < 5; i++) {
        numbers[i] *= 3;
    }

    printf("Modified Array (after multiplying each element by 3):\n");

    
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
