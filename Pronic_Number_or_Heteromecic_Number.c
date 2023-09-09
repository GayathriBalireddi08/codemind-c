#include<stdio.h>
int main()
{
    int n,x,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=i*(i+1);
        if(x==n)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}