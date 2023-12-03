#include<stdio.h>
void sum(int ,int);//function with arguments and no return type
int sum2(int ,int);//functions with arguments and return type
void sum3();//function with no arguments and no retun type
int sum4( );//function with argumets and return type




void sum( int a ,int b  ){
    int c;
    c= a+b;
    printf("The addition of two number is %d",c);

}

int sum2( int a, int b){
    int c;
    
    return c=a+b;

}

void sum3(){
    int a,b,c;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition is %d",c);
    
}

int sum4(){
     int a,b,c;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;



}

int main(){
    // sum(2,4);

    // printf("The addion of two number is %d",sum2(2,1));

    // sum3();

    printf("Add %d",sum4());

    return 0;

}