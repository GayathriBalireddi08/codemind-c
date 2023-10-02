#include<stdio.h>
int main()
{
    int a,y,w,r;
    scanf("%d",&a);
    y=a/365;
    r=a%365;
    w=r/7;
    printf("%d
%d",y,w);
}