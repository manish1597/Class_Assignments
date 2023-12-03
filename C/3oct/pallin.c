#include<stdio.h>

void pallin(){
     int n ;
    int rev=0;
    int rem;
    printf("Enter any Number=\n");
    scanf("%d",&n);
    while(n!=0){
        rem =  n%10;
        rev=rev*10+rem;
        n=n/10;

    }

    printf("The REVERSE of Given number is \n=%d",rev);
    
    if (rev==n)
    {
        printf("GIVEN NUMBER IS PALLINDROME\n");
    }
    else{
        printf("GIVEN NUMBER IS NOT PALLINDROME\n");
    }
    
}

int main(){
    pallin();
    return 0;

}