#include<stdio.h>

void main() {
    int n,i;
    
    int a=0, b =1;
    
    int nxtTrm = a+b;
    
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    
    printf("The terms are: %d %d ",a,b);
    
    for(i=3;i<=n;i++){
        printf("%d ",nxtTrm);
        a = b;
        b = nxtTrm;
        nxtTrm = a+b;
        
    }
    
}
