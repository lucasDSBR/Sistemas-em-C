/*
 * multiplos de um numero e teste.
 *
 *  Criado em: 03/07/2021;
 *      Autor: Lucas Silva;
 */


#include <stdio.h>

/*Func msg de teste*/
void msgsucesso(){
    printf("Sistema para calcular os multiplos de um numero esta funcionando!. Seguindo para proxima etapa...\n\n");
}
void msgerro(){
    printf("Ops, ocorreu um erro ao executar a aplicação.\n\n");
}
/*fim*/

int func1(int n1, int n2){
    int i, k;
    if (n1 = (int)n1){
        if (n2 = (int)n2){
            msgsucesso();
            if(n1 < n2){
                for(i = n1; i <= n2; i++){
                    if(n2%i == 0){
                        k = k + 1;
                    }
                }
            }
            printf("\n\nO total de multiplos de %d menores que %d e igual a %d\n\n", n1, n2, k);
        }
    }else{
        msgerro();
    }
    
    return 0;
}
/*Func Inicialização*/
int main(){
    int n1, n2;
    printf("Informe dois numeros: ");
    scanf("%d %d", &n1, &n2);
    func1(n1, n2);
}
/*fim*/