#include <stdio.h>
int fat(int n){
    if(n==0){
        return 1;
    }else{
        return n*fat(n-1);
    }
    
    }
int main(){
    int resulta=fat(5);
    printf("%d",resulta);

    return 0;
}