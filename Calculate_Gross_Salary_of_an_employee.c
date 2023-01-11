#include<stdio.h>
int main(){
    float b,hra,da,gross,pf;
    scanf("%f%f%f",&b,&hra,&da);
    pf=0.12*b;
    gross=hra+da+b+pf;
    printf("%.2f
%.2f",pf,gross);
}