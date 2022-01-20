/******************************************************************************

Desenvolvido por: LUCAS SILVA

*******************************************************************************/

#include <stdio.h>

float incremento(int tipo, float nota){
    float notaAtualizada;
    if(tipo == 1){
        notaAtualizada = nota + 0.45;
    }else if(tipo == 2){
        notaAtualizada = nota + 0.20;
    }else if(tipo == 3){
        notaAtualizada = nota + 0.35;
    }
    return notaAtualizada;
}
int result(float media){
    printf("%f", media);
    if(media >= 8.0 && media <= 10.0){
        printf("\n\nMedia com classificação: A1");
    }
    if(media >= 7.0 && media <= 8.0){
        printf("\n\nMedia com classificação: B2");
    }
    if(media >= 6.0  && media <= 7.0){
        printf("\n\nMedia com classificação: C3");
    }
    if(media >= 5.0 && media <= 6.0){
        printf("\n\nMedia com classificação: D4");
    }
    if(media >= 0.0 && media <= 5.0){
        printf("\n\nMedia com classificação: E5");
    }
    return 0;
}

int main()
{
    float n1, n2, n3, mediap;
    printf("Nota\n");
    printf("Informe a nota do(a) aluno(a):\n");

    printf("\nNota do trabalho: ");
    scanf("%f", &n1);
    n1 =+ incremento(1, n1);
    printf("\nNota da avaliação parcial: ");
    scanf("%f", &n2);
    n2 =+ incremento(1, n2);
    printf("\nNota da avaliação final: ");
    scanf("%f", &n3);
    n3 =+ incremento(1, n3);

    mediap = (n1+n2+n3)/(3);

    result(mediap);
    return 0;
}
