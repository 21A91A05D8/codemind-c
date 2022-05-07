#include<stdio.h>
int main()
{
    int a[100][100],i,j,max=0,l,r;
    scanf("%d%d",&l,&r);
    for(i=0;i<l;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        max=0;
        for(j=0;j<l;j++)
        {
            if(max<a[j][i])
            {
                max=a[j][i];
            }
        }
        printf("%d
",max);
    }
}