#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],b[100],i,j,s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        s1=s1+a[i];
    }
    for(i=0;i<n;i++)
    {
        s2=s2+b[i];
    }
    if((s1-s2)<0)
    printf("%d",abs(s1-s2));
    else
    printf("0");
}