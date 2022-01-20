/*
*
*   Desenvolvido por Lucas Silva 
*   Data: 14/07/2021
*   Sequência de Hailstone
*
*
*/

#include <stdio.h>
int i;

int teste(int t){
    if (t == 1){
        printf("Funcao ok\n\n");
    }else{
        printf("Erro\n\n");
    }
}

int funcc(int num){
    i = i + 1;
    if (num == 1){
        teste(num);
        printf("===>>> %d", i);
        return 0;
    }
    if (num%2 == 0){
        return num + funcc(num/2);
    }else{
        return num + funcc((3*num)+1);
    }
}

int main(){
    int n;
    printf("Digite dois numero: ");
    scanf("%d", &n);
    printf(" numeros estao integrados na sequencia de Hailstone do numero %d. Realizando uma somatoria\nobtemos um valor de: %d\n\n", n, funcc(n));

    return 0;
}
