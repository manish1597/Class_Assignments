#include<stdio.h>
int evenodd(int);

int evenodd(int n){
    if(n%2==0){
        return 1;
    }

    else{
        return 0;
    }

}

void main(){
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    printf("The value of even odd number is :%d",evenodd(num));
}