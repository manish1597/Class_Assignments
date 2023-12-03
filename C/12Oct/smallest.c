#include <stdio.h>

int smallest(int arr[], int size) {
    int min = 2147483647; // Initialize min to the maximum possible integer value

    for (int i = 0; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    printf("Enter the size of the Array: ");
    int k;
    scanf("%d", &k);

    int arr[k]; 

    printf("Enter the Array Elements:\n");
    for (int i = 0; i < k; i++) { 
        scanf("%d", &arr[i]); 
    }

    int min = smallest(arr, k);

    printf("The smallest element of the array is %d\n", min);

    return 0;
}
