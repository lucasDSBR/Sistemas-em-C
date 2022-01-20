/*
 * O número de Armstrong é um 
 *
 *  Criado em: 03/07/2021;
 *      Autor: Lucas Silva;
 */


#include <stdio.h>

int main(){
    int valor, resto, soma, valor2;

    printf("Informe um numero: ");
    scanf("%d", &valor);
    valor2 = valor;
    while(valor > 0){
        resto = valor%10;
        soma = soma+(resto*resto*resto);
        valor = valor/10;
    }
    if (valor2 == soma){
        printf("%d e um numero armstrong", valor2);
    }else{
        printf ( "%d nao e um numero armstrong", valor2);   
    }
    return 0;
}