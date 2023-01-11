#include<stdio.h>
int main(){
    int p,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    p=b+2*c;
    if(p>=a)
    printf("Qualify");
    else
    printf("Not Qualify");
}