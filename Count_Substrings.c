#include<stdio.h>
int main(){
    int t,i,j,n,s=0;
    char str[100000]; 
    scanf("%d" ,&t);
    while(t) {
        s=0;
        scanf("%d" ,&n);
        scanf("%s" ,str);
        for(i=0;i<n;i++) { 
            if(str[i]=='1') {
                s=s+1; 
                
            }
            }
            for(i=0;i<n;i++) { 
                for(j=i+1;j<n;j++) {
                    if(str[i]=='1'&&str[j]=='1') {
                        s=s+1; 
                        
                    } 
                    
                }
                
            } 
            printf("%d
" ,s); 
            t--;
            }
    
}