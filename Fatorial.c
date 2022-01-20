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

	int valor, fat, num;

	printf("Digite um numero");
	scanf("%d", &valor);


	num = valor;
    fat = 1;
	while(num>1){
        fat = fat * num;
		num = num - 1;
        
	}

	printf("Valores: %d\n", fat);
	return 0;
}