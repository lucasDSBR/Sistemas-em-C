#include <stdio.h>


int main(){
    int x, y, soma, sub, mult, div;;
    char o;
    printf("Digite dois numero e uma operacao. Exemplo '2' '3' '*'...: ");
    scanf("%d %d %c", &x, &y, &o);

    switch(o){
        case '+':
            printf("Voce optou por realizar uma adicao entre os numeros:\n");
            soma = x + y;
            printf("O valor e: %d", soma);
            break;
        case '-':
            printf("Voce optou por realizar uma subtracao entre os numeros:\n");
            sub = x - y;
            printf("O valor e: %d", sub);
            break;
        case '*':
            printf("Voce optou por realizar uma multiplicacao entre os numeros:\n");
            mult = x * y;
            printf("O valor e: %d", mult);
            break;
        case '/':
            printf("Voce optou por realizar uma multiplicacao entre os numeros:\n");
            div = x / y;
            printf("O valor e: %d", div);
            break;
        default:
            printf("Operacao invalida");
    }
    return 0;
}