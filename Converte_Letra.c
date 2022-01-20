/*
*   Criado por: LUCAS SILVA
*   Criado em: 29/07/2021
*
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int conv(char * s){
    int c = strlen(s);
    char minusculo;
    printf("\n\nTotal de caracteres: %d\n\n\n", c);
    char frase[c];

    //Para todos os caracteres de s...
    for(int i = 0; i < strlen(s); i++){
        if(isupper(s[i])){
            frase[i] = tolower(s[i]);
        }else{
            frase[i] = toupper(s[i]);
        }
    }
    printf("\n\nTexto convertido:\n\n");
    for(int b = 0; b < c; b++){
        printf("%c", frase[b]);
    }
    printf("\n\n\n\n");
    return 0;
}

int main(){
    char str[] = "Republica Feredatica do Brasil";
    conv(str);
    return 0;
}
