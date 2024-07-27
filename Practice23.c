#include<stdio.h>
int main(){
    int a=0,b=1;
    for(;b;printf("%d\t",a)){
        b=a++<=3;
    }
    return 0;
}