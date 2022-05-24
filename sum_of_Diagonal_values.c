#include<stdio.h>
int main()
{
    int r,c,i,j,a[1000][1000],s=0,s1=0,sum=0;
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
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                s+=a[i][j];
            }
            else
            {
                if(i+j==c-1)
                s1+=a[i][j];
            }
        }
    }
    sum=s1+s;
    printf("%d",sum);
    
}