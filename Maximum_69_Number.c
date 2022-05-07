#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[1000];
    scanf("%s",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]=='6')
        {
            str[i]='9';
            break;
        }
    }
    printf("%s",str);
}