#include<stdio.h>
int main()
{
    int n,a[100],c=0,v=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        if(a[i]%2!=0)
        {
            v++;
        }
    }
    printf("%d %d",c,v);
}