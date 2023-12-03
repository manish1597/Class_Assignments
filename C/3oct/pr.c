#include<stdio.h>
void primeFunction(){

    printf("Prime Number \n");
    int n;
    printf("Enter any number =\n");
    scanf("%d",&n);
    if(n==1){
        printf("Not a Prime Number ");
    }
    int i=2;
    while(i<=n/i){  
        if(n%i==0){
            printf("Not a Prime number");
            i++;
            break;
            
        }
        else{
             printf("Given number is Prime Number ");
             break;
        }
        
    }
   

}

int main(){
    primeFunction();
    return 0;

}