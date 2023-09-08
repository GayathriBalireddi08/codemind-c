#include<stdio.h>
int main()
{
    int n,r,i,sum=0,pro=1,re;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        pro=pro*r;
        re=pro-sum;
        n=n/10;
    }
    printf("%d",re);
    
}