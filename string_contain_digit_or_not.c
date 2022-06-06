#include<stdio.h>
int main()
{
    char str[1000];
    int i,c=0,s=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            s++;
        }
    }
    if(s==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
        printf("Contains %d digit",s);
    }
}