#include <stdio.h>

void LinearSearch(int arr[], int n, int a) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            printf("Index of %d is %d\n", a, i);
        }
    }
}

int main() {
    int arr[] = {2, 4, 6, 7, 8, 9, 12, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 12;
    LinearSearch(arr, n, k);
    return 0;
}
