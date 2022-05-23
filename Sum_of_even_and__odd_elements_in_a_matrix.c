#include<stdio.h>
int main()
{
    int r,c,a[100][100],sum=0,su=0,i,j;
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
            if(a[i][j]%2==0)
            {
                sum=sum+a[i][j];
            }
            else
            {
                su=su+a[i][j];
            }
        }
    }
    printf("%d %d",sum,su);
}