#include<stdio.h>
int main()
{
    float n1,n2;
    float n;
    
    scanf("%f%f",&n1,&n2);
    n= (n1+n2)/2;
    printf("Average of %0.0f and %0.0f is: %0.2f",n1,n2,n);
}