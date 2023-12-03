#include<stdio.h>

void swapper(int * ,int *);

void swapper(int *px,int *py){
    int temp;
    temp=*px; 
    *px=*py;
    *py= temp;
}

int main(){ 
    int num1=10;
    int num2=20;

    swapper(&num1,&num2);

    printf(" after swapping: %d\t%d",num1,num2);

    return 0;

}  

