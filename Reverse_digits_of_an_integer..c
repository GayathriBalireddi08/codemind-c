#include<stdio.h>
int main()
{
    int m=0,n,k=0;
    scanf("%d",&n);
    
    while(n>0)
    {
        m=n%10;
        k=(k*10)+m;
        n=n/10;
        
    }
    printf("%d",k);
}