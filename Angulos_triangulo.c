/*
 * Angulos do triangulo
 *
 *  Criado em: 25/05/2021;
 *      Autor: Lucas Silva;
 */


#include <stdio.h>

int main(){
    int a, b, soma, tri, resposta;

    printf("Informe dois angulos de um triangulo:");
    scanf("%d %d", &a, &b);
    tri = 180;
    soma = a+b;

    resposta = tri - soma;

    printf("O valor do angulo que falta para formar um triangulo e: %d", resposta);

    return 0;

}