#include<stdio.h>

void main(){
    int num,*ptr1;
    num=10;
    ptr1=&num;
    printf("value of num is %d\n",num);
    printf("Address of num is %d\n",&num);
    printf("value  of ptr1 is %d\n",ptr1);
    printf("value  at address of ptr1 is %d\n",*ptr1);

    // 
}