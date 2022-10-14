#include<stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&n);
    a=65+n-1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",a);
        }
        printf("
");
        a=a-1;
    }
}