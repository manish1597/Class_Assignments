#include<stdio.h>
#pragma startup fun1
#pragma exit fun3
void main(){

    printf("This is main funtion ");

}


void fun1(){
    printf("this is function 1");
}
void fun2(){
    printf("this is function 1");
}
void fun3(){
    printf("this is function 3");
}

