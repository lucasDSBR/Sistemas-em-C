/*
*
* Informar o mês e o dia em que estamos;
*   Desenvolvido em: 25/06/2021;
*   Desenvolvido por: Lucas Silva;
*
*/

/* IMPORTAÇÃO DE BIBLIOTECAS */
#include<stdio.h>


int main(){
    int valor, num1, num2, i;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);    
    

    if (num1 > num2){
        for (i = num2; i <= num1; i++){
            if(i%2 == 0){
            }
            else{
                printf("%d", i);
            }
        
        }
    }else if (num1 < num2){
        for (i = num1; i <= num2; i++){
            if(i%2 == 0){
            }
            else{
                printf("%d", i);
            }
        
        }
    }
    
    return 0;
}