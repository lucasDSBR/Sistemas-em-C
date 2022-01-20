/*
*
* Informar o mês e o dia em que estamos;
*   Desenvolvido em: 25/05/2021;
*   Desenvolvido por: Lucas Silva;
*
*/

/* IMPORTAÇÃO DE BIBLIOTECAS */
#include<stdio.h>

int main(){

	int valor, i, resultado, num;



	printf("Digite um numero");
	scanf("%d", &valor);
    resultado = 0;
    i = 2;
    num = valor;
    while(i <= num/2){
        if (num% i == 0){
            resultado++;
            break;
        }
        i++;
        
	}

	if (resultado == 0)
        printf("%d E um numero primo\n", num);
    else
        printf("%d Nao e um numero primo\n", num);
    return 0;
}