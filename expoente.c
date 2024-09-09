#include<stdio.h>
int expoente(int b,int e){
    if(e==0){
        return 1;
    }else if(e==1){
        return b;
    }else{
        return b*expoente(b,e-1);
    }
}
//teste
int main(){
    int ex=expoente(5,2);
    printf("%d\n",ex);
    return 0;
}