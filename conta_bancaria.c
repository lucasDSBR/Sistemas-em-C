/*
*
* 
*   Desenvolvido em: 21/06/2021;
*   Desenvolvido por: Lucas Silva;
*
*/
#include<stdio.h>

int main(){
    int conta, valor_dep, valor_saq;
    char opcao;
    conta;
    do
    {
        switch(opcao)
            {
                case 'a':
                        system("cls || clear");
                        printf("||||||||||||||||||||||||||||||||||||\n");
                        printf("|| Voce esta com saldo de $%d", conta);
                        printf("\n||||||||||||||||||||||||||||||||||||\n");
                        break;
                case 'b':
                        system("cls || clear");
                        printf("Realizar deposito:\n");
                        printf("Qual o valor que deseja depositar?\n");
                        printf("Valor: ");
                        scanf("%d", &valor_dep);
                        if (valor_dep > 0){
                            conta += valor_dep;
                            system("cls || clear");
                            printf("||||||||||||||||||||||||||||||||||||\n");
                            printf("|| Deposito realizado com sucesso.\n");
                            printf("||||||||||||||||||||||||||||||||||||\n");
                            break;
                        }else{
                            system("cls || clear");
                            printf("Desculpe, o valor fornecido nao pode ser depositado.\n\n");
                            break;
                        }
                        break;
                case 'c':
                        system("cls || clear");
                        printf("Realizar deposito:\n");
                        printf("Qual o valor que deseja sacar?\n");
                        printf("Valor: ");
                        scanf("%d", &valor_saq);
                        if (valor_dep > 0){
                            conta -= valor_saq;
                            system("cls || clear");
                            printf("||||||||||||||||||||||||||||||||||||\n");
                            printf("|| Saque realizado com sucesso.\n\n");
                            printf("||||||||||||||||||||||||||||||||||||\n");
                            break;
                        }else{
                            system("cls || clear");
                            printf("Desculpe, o valor fornecido nao pode ser depositado.\n\n");
                            break;
                        }
                        break;
                        
            }
        printf("Escolha uma opcao:\n a - Saldo;\n b - Realizar deposito na conta;\n c - Realizar saque na conta;\n d - Sair do sistema.");
        printf("\nO que deseja realizar ?: ");
        scanf("%c", &opcao);
    }while (opcao != 'd');
    return 1;
}