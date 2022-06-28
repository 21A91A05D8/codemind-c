#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                if(a[i]%2==1)
                sum += a[i];
            }
            if (a[i] == a[j])
            {
                break;
            }
        }
    }
    printf("%d",sum);
}