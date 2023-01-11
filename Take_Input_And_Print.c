#include<stdio.h>
#include<string.h>
int main()
{
    char ch[16];
    scanf("%[^
]%*c",ch);
    printf("%s",ch);
}