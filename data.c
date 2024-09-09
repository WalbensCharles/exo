#include<stdio.h>


typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;
struct Data data1, data2;

int extraidia(Data data){
    return data.dia;
}

int comparaDatas(Data data1,Data data2 ){
    if(data1.ano<data2.ano || (data1.ano==data2.ano && data1.mes<data2.mes )|| (data1.ano==data2.ano && data1.mes==data2.mes && data1.dia<data2.dia)){
        return -1;
    }else 
        if(data1.ano>data2.mes || (data1.ano==data2.ano && data1.mes>data2.mes) || (data1.ano==data2.ano && data1.mes==data2.mes && data1.dia>data2.dia)){
            return 1;
        }else{
        return 0;
    }
}
//nao pediu main no remonciado mas eu deixei aqui só pra testar
int main(){
    Data data1={8,10,2009};
    Data data2 ={9,10,2010};


   printf("compara data : %d\n",comparaDatas(data1,data2));
   printf("extrai data  : %d \n",extraidia(data1));
}
