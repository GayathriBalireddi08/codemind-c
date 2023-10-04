#include<stdio.h>
int main()
{
    int m,i,k=1;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        k=k*i;
    }
    printf("%d",k);
}