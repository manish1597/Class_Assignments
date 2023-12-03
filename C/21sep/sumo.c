
#include <stdio.h>

void main() {
    int n;
    int sum = 0; 
    printf("Enter any number 0 to exit = ");
    
    while (1) { 
        scanf("%d", &n);
        
        if (n == 0) {
            break;  

        }
        
        sum += n;  
        printf("Enter any number (0 to exit) = ");
    }   
    
    printf("The sum of entered numbers is %d\n", sum);
    
    // return 0;
}
