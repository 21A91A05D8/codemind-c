#include<stdio.h>
int main()
{
    int i,a[100],fs=0,ss=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        {
            fs=fs+a[i];
        }
        else
        {
            ss=ss+a[i];
        }
    }
    printf("%d
",fs);
    printf("%d
",ss);
}