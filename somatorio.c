#include <stdio.h>
int somatorio(int n, int v[]){
    if(n==0){
        return v[0];
    }else{
        return v[n]+somatorio(n-1,v);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }

    int rvet=somatorio(n-1,v);

    printf("%d\n",rvet);
    return 0;
}
