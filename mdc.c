#include<stdio.h>
int mdc(int n,int m){
    if(n==0){
        return m;
    }else{
        return mdc(n,m%n);
    }
}
int main(){
    int so=mdc(12,18);
    printf("%d\n",so);
}