#include <stdio.h>

int main() {
 printf("Welcome to even odd program\n");
  int n;
  printf("Please Enter any number=\n");
  scanf("%d",&n);
  if((n&1)==0){
    printf("Entered Number is EVEN");
    
  }
  else{
     printf("Entered Number is ODD");
  }
  
  return 0;
}


