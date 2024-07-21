#include<stdio.h>
int main(){
    
    int a=1,b=5,c=3,d;

    d=a*=b++ + a<<c--,printf("%d\t%d\t",b,c),++a;
    printf("%d\t%d",a,d);
    
    
    
    return 0;

}