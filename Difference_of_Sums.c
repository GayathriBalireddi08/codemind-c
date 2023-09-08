#include<stdio.h>
int main()
{
    int n,i,s,sum=0,ss=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    s=sum*sum;
    for(i=1;i<=n;i++)
    {
        ss+=i*i;
    }
    d=s-ss;
    printf("%d",d);
}