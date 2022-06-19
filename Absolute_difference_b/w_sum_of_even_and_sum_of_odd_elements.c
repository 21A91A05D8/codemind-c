#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,res=0,e=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e=e+a[i];
        }
        else
        {
            o=o+a[i];
        }
    }
    res=(o-e);
    printf("%d",abs(res));
}