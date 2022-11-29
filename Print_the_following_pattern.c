#include<stdio.h>
int main()
{
    int n,n1,i,j;
    scanf("%d" ,&n);
    n1=1;
    for(i=n;i>=1;i--) {
        for(j=1;j<=n;j++) { 
            if(j==n1||j==i) {
                printf("%d " ,i);
                }
                else {
                    printf(" " );
                    } 
            
        } 
        n1++; 
        printf("
" ); 
        
    }
    
}