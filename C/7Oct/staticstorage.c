#include<stdio.h>
int n1=10;
void fun();
void main(){
    int n=20;
    int n2=20;
    {//block1     


      int n3=4;
      printf("%d\n",n);
      printf("Block 1 is called %d\n",n3);
        
    }

    {//block 2
       int n4=2;
       printf("block 2 is called %d\n",n4);
    }
    fun();
    fun();

}

void fun(){
    
    static int i=4;
    i++;
    printf("%d\n",i);

}