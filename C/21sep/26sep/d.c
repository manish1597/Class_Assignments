#include<stdio.h>

void main(){
    for(int row =1;row<=5*2-1;row++){
        int colinrow=(row>5)?(2*5-row):(row);
        for(int s=1;s>5-colinrow;s++){
            printf(" ");
        }
        for(int col=colinrow;col>=1;col--){
            printf("%d",col);

        }
        for(int col=2;col<=colinrow;col++){
            printf("%d",col);

        }
        printf(\n)
    }
}