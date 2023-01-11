#include<stdio.h>
int main(){
    int n,k,m,a;
    scanf("%d%d%d",&n,&k,&m);
    a=m*k;
    if(a>=n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}