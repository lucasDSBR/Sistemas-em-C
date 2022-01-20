/*
*
* Informar o mês e o dia em que estamos;
*   Desenvolvido em: 25/05/2021;
*   Desenvolvido por: Lucas Silva;
*
*/

/* IMPORTAÇÃO DE BIBLIOTECAS */
#include<stdio.h>

int main(){

	int val, numeros[5];
    
    for(int i = 0; i <= 5; i++){
        printf("informe um numero: ");
        scanf("%d", &numeros[i]);
    }

    //Contando o total de elementos do array:
    int totNumeros = sizeof(numeros)/sizeof(int);
    
    //Ordenando elementos:
    for(int l = 0; l <= totNumeros; l++){
        for(int j = l+1; j<=5; j++){
            if (numeros[l]>numeros[j]){
                val = numeros[l];
                numeros[l] = numeros[j];
                numeros[j] = val;
            }
        }
    }
    
    //Mostar valores unicos:
    for(int m = 0; m <= totNumeros; m++){
        for (int n = 1; n <= 6; n++){
            if(numeros[n] == numeros[m]){
                
            }else{
                printf("%d, ", numeros[n]);
            }
        }   
    }
	return 0;
}