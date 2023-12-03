
#include <stdio.h>

struct Students
{
    int rno;
    char name[20];
    float marks;
};

typedef struct Students member;
int main() 
{
    member s[2]; 
 
    printf("ENTER the Roll number of Two Students \n");


    for(int i=0;i<2;i++){ 
        scanf("%d",&s[i].rno);
    }

    

 
     fflush(stdin);

     printf("ENTER the Name of Two Students \n");

       for(int i=0;i<2;i++){
        gets(s[i].name);
    }

     fflush(stdin);

     printf("Enter the Marks of Two Students\n");

    for(int i=0;i<2;i++){
          scanf("%f",&s[i].marks);
    }  

        fflush(stdin);  

   






      printf("ENtered roll_numbers are\n");

     for(int i=0;i<2;i++) 
     {
        printf("%d\n",s[i].rno); 
     }

    
    printf("Entered Names are \n");

    
       for(int i=0;i<2;i++){
      
        puts(s[i].name);
    }





   printf("Entered marks are");

      for(int i=0;i<2;i++){
          printf("%f\n",s[i].marks); 
    }  


    

   

    return 0;
}


