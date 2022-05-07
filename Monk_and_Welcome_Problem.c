#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,s=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]+b[i]);
}