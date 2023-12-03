#include <stdio.h>

int largest(int arr[], int size) {
    int max = -2147483648; // Initialize max to the minimum possible integer value

    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {221, 32, 65, 998, 954, 212};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = largest(arr, size);

    printf("Largest element is %d\n", max);

    return 0;
}
