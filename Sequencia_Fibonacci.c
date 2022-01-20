/*
*
* Informar o mês e o dia em que estamos;
*   Desenvolvido em: 25/06/2021;
*   Desenvolvido por: Lucas Silva;
*
*/

/* IMPORTAÇÃO DE BIBLIOTECAS */
#include<stdio.h>


int main(){
    int num, f1 = 1,  f2 = 1, soma, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 3; i < num; i++){
        soma = f1 + f2;
        f1 = f2;
        f2 = soma;
        printf("%d,", f2);
    }
    return 0;
}