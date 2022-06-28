#include<stdio.h>
int main()
{
    int n,m,lcm=1,i;
    scanf("%d%d",&n,&m);
    for(i=lcm;i<10000;i++)
    {
        if(lcm%n==0 && lcm%m==0)
        {
            break;
        }
        else{
            lcm++;
        }
    }
    printf("%d",lcm);
}