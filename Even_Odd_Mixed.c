#include<stdio.h>
int main()
{
    int n,r,sum=0,e=0,o=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            e=1;
        }
        else if(r%2!=0)
        {
            o=1;
        }
        n=n/10;
    }
    if(e==0)
    {
        printf("Odd");
    }
    else if(o==0)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
}