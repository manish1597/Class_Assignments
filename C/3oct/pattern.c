#include<stdio.h>

void printPattern(int n) {
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= row; col++) {
            printf("%d", col);
        }
        printf("\n");
    }
}

void printPattern2(int n) {
    for(int row =1;row<=5;row++){
        for(int col=1;col<=5-row+1;col++){
            printf("%d",col);
        }
        printf("\n");
    }
}

void printPattern3(int n) {
    for(int row =1;row<=5;row++){
        for(int col=1;col<=5-row+1;col++){
            printf("* ");
        }
        printf("\n");
    }

}


void printPattern4(int n) {
     for(int row =1;row<=5;row++){
        for(int col=1;col<=5;col++){
            printf("%d ",col);
        }
        printf("\n");
    }
}


void printPattern5(int n) {
     for(int row =1;row<=5;row++){ 
        for(int col=1;col<=5;col++){
            printf("* ");
        }
        printf("\n");
    }
}

void printPattern6(int n) {
     
    for (int row = 1; row <= 2 * n; row++) { 
        int columnInRow = (row > n) ? (2 * n - row) : row;

        for (int s = 1; s <= n - columnInRow; s++) { 
            printf("  ");
        }

        for (int col = columnInRow; col >= 1; col--) {
            printf("%d ", col);
        }

        for (int col = 2; col <= columnInRow; col++) {
            printf("%d ", col);
        }

        printf("\n");
    }
}



int main() {
    int n;
    printf("Enter the number of levels: ");
    scanf("%d", &n);
    
    printPattern(n);
    
    printPattern2(n);
    
    printPattern3(n);
    //pattern4[[]]
    printPattern4(n);
    
    printPattern5(n);
    
    printPattern6(n);

    
    return 0;
}
