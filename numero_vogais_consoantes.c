/*
*   Criado por: LUCAS SILVA
*   Criado em: 29/07/2021
*
*
*/
#include <stdio.h>
#include <stdlib.h>


int main(){
    char str[] = "lucas Silva";
    int c = strlen(str);
    char vogais[c];
    int contador = 0;
    int espacos = 0;
    for(int i = 0; i < strlen(str); i++){
            if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')){
                contador++;
            }else if(str[i] == ' '){
                espacos++;
            }
    }
    int totalConsuantes = c - contador - espacos;

    printf("\nO nome ' %s ' possui:", str);
    printf("\n\n");
    printf("\nTotal de consoantes: %d", totalConsuantes);
    printf("\nTotal de vogais: %d", contador);
    printf("\n\n\n");
    return 0;
}
