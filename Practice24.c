#include<stdio.h>
int main(){
    int i,j,n=31 ,count=0;
    for(i=1;i<=n;i++)
    for(j=1;j<=i;j++)
    count+=1;
    printf("%d",count);
    return 0;
}