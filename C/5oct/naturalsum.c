#include<stdio.h>

void sumofnatural();

void sumofnatural( ){
    int sum;
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    sum= n*(n+1)/2;

    printf("The sum of natural number is %d",sum);


    

}

void main(){
    printf("Sum of natural numbers ");
    sumofnatural();
}