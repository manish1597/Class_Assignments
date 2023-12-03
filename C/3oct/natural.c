#include<stdio.h>
 
void natural(){
    int n;
    int sum;
    printf("Enter the number ");
    scanf("%d",&n)
    sum=(n*(n+1)/2);
    printf("The of natural number is %d",sum);

    
}

int main(){
    natural();
    return 0;
}