#include <stdio.h>

int main() {
    // Write C code here
  int n;
  printf("Entere any Number =");
  scanf("%d",&n);
  int fact=1;
  // while(n>0){
  //     fact=fact*n;
  //     n--;
      
  // }
  
  //USING FOR LOOP
  
  for(int i=n;i>0;i--){
    fact=fact*i;
  }

  //Using do while loop
  
  // do{
  //   fact=fact*n;
  //   n--;
  // }while (n>0)
  
  


  printf("Factorial of Number is %d",fact); 

    return 0;
}
