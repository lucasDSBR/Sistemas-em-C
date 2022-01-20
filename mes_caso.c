#include <stdio.h>


int main(){
    int dia;
    printf("Digite o mes(em numero): ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("Janeiro, possui 31 dias\n");
            break;
        case 2:
            printf("Fevereiro, possui 28 dias (29 dias nos anos bissextos)\n");
            break;
        case 3:
            printf("Marco, possui 31 dias\n");
            break;
        case 4:
            printf("Abril, possui 30 dias\n");
            break;
        case 5:
            printf("Maio, possui 31 dias\n");
            break;
        case 6:
            printf("Junho, possui 30 dias\n");
            break;
        case 7:
            printf("Julho, 31 dias\n");
            break;
        case 8:
            printf("Agosto, 31 dias\n");
            break;
        case 9:
            printf("Setembro, 30 dias\n");
            break;
        case 10:
            printf("Outubro, possui 31 dias\n");
            break;
        case 11:
            printf("Novembro, possui 30 dias\n");
            break;
        case 12:
            printf("Dezembro, possui 31 dias\n");
            break;
        default:
            printf("Operacao invalida");
    }
    return 0;
}