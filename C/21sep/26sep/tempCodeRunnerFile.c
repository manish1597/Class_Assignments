#include<stdio.h>

void main(){
    int n;
    // printf("Enter the nubmer of levels :");
    // scanf("d",&n);
    for(int row =1;row<=5;row++){
        for(int col=1;col<=5-row+1;col++){
            printf("%d",col);
        }
        printf("\n");
    }
}