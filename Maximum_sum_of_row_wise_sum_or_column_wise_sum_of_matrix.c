#include<stdio.h>
int main()
{
    int r,c,i,j,a[1000][1000],s=0,max1=0,max2=0;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s+=a[i][j];
        }
        if(s>max1)
        {
            max1=s;
        }
    }
    for(j=0;j<c;j++)
    {
        s=0;
        for(i=0;i<r;i++)
        {
            s+=a[i][j];
        }
        if(s>max2)
        {
            max2=s;
        }
    }
    if(max1>max2)
    {
        printf("%d",max1);
    }
    else
    {
        printf("%d",max2);
    }
    
}