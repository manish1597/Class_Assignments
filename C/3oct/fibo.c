#include<stdio.h>

void fibo(){
    int n, first = 0, second = 1, next; 

    printf("Enter the number of sequence: "); 
    scanf("%d", &n);
    printf("Fibonacci Series:\n");

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;   
        else {
            next = first + second; 
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    
}

int main(){
    fibo();
    return 0;
}