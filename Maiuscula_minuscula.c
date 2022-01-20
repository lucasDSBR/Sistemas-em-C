#include<stdio.h>
#include<stdlib.h>
#include <string.h>
//maiuscula strupr(string)
//minuscula strlwr(string)
main() {
    char string[20];
    printf("\n Escreva uma frase:");
    gets(string);
    printf("\n A frase original eh: %s", string);
    strlwr(string);
    printf("\n A frase convertida eh: %s", string);
    printf("\n \n");
    system("pause");
    return 0;
}
