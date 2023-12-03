#include <stdio.h>

int main() {
    int arr[] = {5, 4, 7, 1, 8, 3, 2};

    int *p1 = &arr[0];
    int *p2 = &arr[2];

    // printf("%d", *p1);
     

    // printf("%d",*p2);

    //ASSIGNMENT
    // p2=p2+3;

    // printf("%d",*p2);

    // p1++;

    // printf("%d",*p1);

    --p2;

    printf("%d",*p2);

    return 0;
}
