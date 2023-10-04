#include<stdio.h>
int main()
{
    int l,m,n,k=0;
    scanf("%d",&n);
    l=n;
    while(n>0)
    {
        m=n%10;
        k=(k*10)+m;
        n=n/10;
    }
    if(k==l)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}