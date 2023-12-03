#include <stdio.h>
#include <string.h> 
 
int main()
{
   char str1[100];  
   char str2[100]; 
    printf("Enter first string: \n");
    gets(str1);  
    printf("Enter second string: \n");
    gets(str2); 
    // int n= strcmp(str1,str2);
    int n= strcmpi(str1,str2);
    
    printf("COMPARISON OF STRING\n");
    printf("\n"); 
 
    printf("%d",n);

 
    return 0;
    
}
