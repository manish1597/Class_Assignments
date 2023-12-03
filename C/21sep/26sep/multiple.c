#include<stdio.h>

void main(){
    int n;
    int sum=0;
    int ch;
   do
   {
     printf("Enter any number:\n");
    scanf("%d",&n);
    if(n%5==0){
        sum+=n;
       }
    printf("PRESS 1 FOR CONTINUE AND 0 FOR EXIT\n");
    scanf("d",&ch);
   } while(1);
   printf("The sum of multiple of 5 is :%d",sum);

}