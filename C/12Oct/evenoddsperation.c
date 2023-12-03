#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter each element of array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int evenodd[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            evenodd[count] = numbers[i];
            count++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            evenodd[count] = numbers[i];
            count++;
        }
    }

    printf("New Array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", evenodd[i]);
    }

    return 0;
}
