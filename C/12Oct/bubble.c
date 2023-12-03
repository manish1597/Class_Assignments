    #include <stdio.h>



void bubbleSort(int arr[], int n) {
    for (int turn = 0; turn < n - 1; turn++) {
        for (int j = 0; j < n - 1 - turn; j++) {
            if (arr[j + 1] < arr[j]) {
                // Swap the array elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 4, 7, 1, 8, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);



    bubbleSort(arr, n);


    printf(" Sorted array is:\n ");
    printArray(arr, n);

    return 0;
}

