/*
*
* Informar o mês e o dia em que estamos;
*   Desenvolvido em: 25/05/2021;
*   Desenvolvido por: Lucas Silva;
*
*/

/* IMPORTAÇÃO DE BIBLIOTECAS */
#include <stdio.h>

int main (void){
    int mes;

    printf("Digite do mes(em numero. Ex: 5 = maio): ");
    scanf("%i", &mes);

    if (dia == 1){
        printf("Voce esta no mes de JANEIRO");
    }else if (mes == 2){
        printf("Voce esta no mes de FEVEREIRO");
    }else if (mes == 3){
        printf("Voce esta no mes de MARÇO");
    }else if (mes == 4){
        printf("Voce esta no mes de ABRIL");
    }else if (mes == 5){
        printf("Voce esta no mes de MAIO");
    }else if (mes == 6){
        printf("Voce esta no mes de JUNHO");
    }else if (mes == 7){
        printf("Voce esta no mes de JULHO");
    }else if (mes == 8){
        printf("Voce esta no mes de AGOSTO");
    }else if (mes == 9){
        printf("Voce esta no mes de SETEMBRO");
    }else if (mes == 10){
        printf("Voce esta no mes de OUTUBRO");
    }else if (mes == 11){
        printf("Voce esta no mes de NOVEMBRO");
    }else if (mes == 12){
        printf("Voce esta no mes de DEZEMBRO");
    }else{
        printf("Ops, encontramos um erro.");
    }
}


