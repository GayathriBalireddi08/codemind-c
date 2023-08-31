#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    int avg;
    avg=(p+c+b+m+cs)/5;
    if(avg>=90)
    {
        printf("Grade A");
    }
    else if(avg>=80)
    {
        printf("Grade B");
    }
    else if(avg>=70)
    {
        printf("Grade C");
    }
    else if(avg>=60)
    {
        printf("Grade D");
    }
    else if(avg>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}