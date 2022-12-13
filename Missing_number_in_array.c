#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long n;
        scanf("%ld",&n);
        long arr[n];
        for(long i=0;i<n-1;i++)
        {
            scanf("%ld",&arr[i]);
            
        }
        long d,s=0;
        d=(n*(n+1)/2);
        for(long i=0;i<n-1;i++)
        {
            s=s+arr[i];
        }
        long a;
        a=(d-s);
        printf("%ld
",a);
    }
}