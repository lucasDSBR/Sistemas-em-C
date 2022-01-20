/*
 * Identificador
 *
 *  Criado em: 25/05/2021
 *      Autor: Lucas Silva
 */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	signed v = 'a', v2 = 'e', v3 = 'i', v4 = 'o', v5 = 'u';
	signed c = 'b', c2 = 'c', c3 = 'd', c4 = 'f', c5 = 'g', c6 = 'j', c7 = 'k', c8 = 'l', c9 = 'm', c10 = 'n', c11 = 'o', c12 = 'q', c13 = 'r', c14 = 's', c15 = 't', c16 = 'v', c17 = 'w', c18 = 'x', c19 = 'z';
	char x;

	printf("Digite um caractere: ");
	scanf("%c", &x);
	if (isalpha(x)){
		if (x == c || x == c2 || x == c3 || x == c4 || x == c5 || x == c6 || x == c7 || x == c8 || x == c9 || x == c10 || x == c11 || x == c12 || x == c13 || x == c14 || x == c15 || x == c16 || x == c19){
			printf("Voce digitou uma caractere considerado uma consoante.");
		}else{
			if (x == v || x == v2 || x == v3 || x == v4 || x == v5 ){
				printf("\nO caractere que voce digitou e uma vogal.");
			}else{
				printf("O caractere que você digitou não e uma vogal. Mas ela está entre as letras do alfabeto.");
			}
		}
	}else {
		if (isgraph(x)) {
				printf("O caractere que voce digitou e especial.");

			}else {
				printf("O caractere que voce digitou nao e especial.");
			}
		if (isalnum(x)) {
			printf("O caractere que voce digitou é um caractere alfanumerico.");
		}
	}
		
    return 0;

}
