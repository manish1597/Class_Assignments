#include<stdio.h>

void main()
{
    int a; 
    int b;
    int c=0;
    
    for(int i=0;i<10;i++){
        printf("Enter the First number =\n");
         printf("Enter the second number=\n");
        scanf("%d",&a);
        scanf("%d",&b);

        c=a+b;

        printf("The sum is = %d\n",c);
        printf("-----------------------\n");
        
    } 

  
}