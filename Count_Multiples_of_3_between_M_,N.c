#include<stdio.h>
int main()
{
    int m,n,c=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<n;i++)
    {
        if(i%3==0)
        {
            c++;
            
        }
    }
     printf("%d",c);
}