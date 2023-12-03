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

  

    strcat(str1,str2);
    printf("The concatinated string is\n");
    puts(str1); 

    return 0;
}
