#include <stdio.h>
#include <string.h>
 
int main()
{
   char str1[100]; 
   char str2[100]; 

    printf("Enter first string: \n");
    gets(str1); 
    strcpy(str2,str1);
    printf("First string is \n");
    puts(str1); 
    printf("Copied string is \n");
    printf(str2);

 

    return 0;
}
