#include <stdio.h>
    typedef struct Fraction{
    int numerador;
    int denominador;

 }Fraction;

Fraction setFraction(int numerador ,int denominador){
    Fraction sfrac;
    sfrac.numerador=numerador;
    sfrac.denominador=denominador;
    return sfrac;

 }
 Fraction multiFraction(Fraction frac1, Fraction frac2){
    Fraction resultado;
    resultado.numerador=frac1.numerador*frac2.numerador;
    resultado.denominador=frac1.denominador*frac2.denominador;
    return resultado;
 }
 //para testar
 int main(){
Fraction frac1=setFraction(4,5);
Fraction frac2= setFraction(3,2);
Fraction resultado=multiFraction(frac1,frac2);
printf("Resultado : %d/%d\n", resultado.numerador, resultado.denominador);
    return 0;

 }