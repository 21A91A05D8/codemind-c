#include<stdio.h>
int main()
{
    int n,k,arr[100],i,j,c=0,s=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s=s+arr[j];
            if(s==k)
            c=c+1;
        }
    }
    printf("%d",c);
}