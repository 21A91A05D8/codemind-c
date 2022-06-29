#include<stdio.h>
int prime(int num)
{
    int c=0,i;
    for (i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,i;
    int c=0,co=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(a[i])==1)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}