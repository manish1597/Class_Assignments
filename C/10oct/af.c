
#include"inclusion.c"

int main() {
    int arr[10];
    printf("Enter 10 values in Array: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
   

    printf("The Given Array is \n");

    for (int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
 
 return 0;
}
