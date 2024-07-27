#include<stdio.h>
int main(){

for(int row=1;row<=4;row++){
    for(int space=1;space<=4-row;space++){
        printf(" ");
    }
    for(int col=1;col<=2*row-1;col++){
        if(row==1||row==4||col==1||col==2*row-1){
            printf("*");
        }
        else{
            printf(" ");
        }

    }
    printf("\n");
    }
        

    return 0;
}








    