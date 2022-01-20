/*
 * Prova, respostas
 *
 *  Criado em: 28/06/2021;
 *      Autor: Lucas Silva;
 */
#include<stdio.h>

int main(){

	int valor, i, valores, num;



	printf("Digite um numero");
	scanf("%d", &valor);
    valores = 0;
    i = 2;
    num = valor;
    while(i < num/2){
        if (num% i == 0){
            valores += num;
            break;
        }
        i++;
        
	}

	if (valores == num)
        printf("%d e um numero perfeito.\n", num);
    else
        printf("%d nao e um numero perfeito.\n", num);
    return 0;
}