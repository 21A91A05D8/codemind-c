#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,r,j,max=100;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i])
        {
            r=arr[i]%10;
            c++;
            arr[i]/=10;
        }
        if(c<max)
        {
            max=c;
        }
        arr[i]=c;
    }
    c=0;
    for(i=0;i<n;i++)
    {
        if(max==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}