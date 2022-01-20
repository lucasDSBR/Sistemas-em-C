/*
 * Temperatura
 *
 *  Criado em: 25/05/2021;
 *      Autor: Lucas Silva;
 */


#include <stdio.h>

int main(){
    float c, calF, calK;


    printf("Informe a temperatura em GRAUS:");
    scanf("%f", &c);

    calF = (1.8*c)+32;
    calK = c + 273;

    printf("A temperatura em Kelvin e: %f", calK);
    printf("\nA temperatura em Farenheit e: %f", calF);
    return 0;
}