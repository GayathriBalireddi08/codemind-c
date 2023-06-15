#include<stdio.h>
int main()
{
    int u;
    float c;
    scanf("%d",&u);
    if(u<200)
    {
      printf("%.2f",(u*1.20)+100);  
    }
    else if(u<400)
    {
        printf("%.2f",(u*1.50)+100);
    }
    else if (u<600)
    {
        printf("%.2f",((u*1.8*0.15)+(u*1.8)));
    }
    else
    {
        printf("%.2f",((u*2*0.15)+(u*2)));
    }
    
}