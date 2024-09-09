#include <stdio.h>
int main(){
    int n=5,n2=1,n1=0,fib;
    printf("%d\n",n1);
    printf("%d\n",n2);
    for(int i=2;i<n;i++){
       fib=n1+n2;
    printf("%d\n",fib);  
    n1=n2; 
    n2=fib;
    }
    
    return 0;
}