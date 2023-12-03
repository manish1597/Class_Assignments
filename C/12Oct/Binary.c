#include <stdio.h>



int binarySearch(int numbers[], int key, int size) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2; 
        if (numbers[mid] == key) {
            return mid;
        }
        if (key > numbers[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 30, 35, 46, 99};
    int key = 46;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, key, size);

    if (index != -1) {
        printf("The index of %d is %d\n", key, index);
    } else {
        printf("%d is not present in the array.\n", key);
    }

    return 0;
}

