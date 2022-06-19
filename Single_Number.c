#include<stdio.h>
int main()
{
    int i,n,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    printf("%d",ans);
}

