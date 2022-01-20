/*
*
*   Desenvolvido por Lucas Silva 
*   Data: 14/07/2021
*   Soma dos digitos de um numero.
*
*
*/

#include <stdio.h>
int resto, soma, valor;


int digitos(int num){
    while(num > 0){
        resto = num%10;
        soma = soma + resto;
        num = num/10;
    }
    return soma; 
}

int main(){
    int n;
    printf("Digite dois numero: ");
    scanf("%d", &n);
    printf("%d", digitos(n));

    return 0;
}
