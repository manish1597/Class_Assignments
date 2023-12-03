#include <stdio.h>

int main() {
    // Write C code here
    printf("List of Even Number upto 100\n");
    int n=1;
    int i=1;
    while(i<100){
        n=n+1; 
        if(n%2==0){
            printf("%d\n",n);
            
        }
            i++;
    }

    

    return 0;
}