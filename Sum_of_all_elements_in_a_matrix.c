#include<stdio.h>
int main()
{
    int r,c,a[100][100],sum=0,i,j;
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
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}