/******************************************************************************

Desenvolvido por: LUCAS DA SILVA

*******************************************************************************/

#include <stdio.h>

int main()
{
    int totAlun;
    float n1, n2, n3, mediap;
    printf("Media de alunos\n");
    printf("Informe o total de alunos da turma:");
    scanf("%d", &totAlun);
    float medG[totAlun];
    char notas[totAlun];

    for(int i = 0; i < totAlun; i++){
        printf("Informe a nota do(a) %dº aluno(a):\n", i);

        printf("\nNota do trabalho: ");
        scanf("%f", &n1);
        printf("\nNota da avaliação parcial: ");
        scanf("%f", &n2);
        printf("\nNota da avaliação final: ");
        scanf("%f", &n3);

        mediap = ((n1*2)+(n2*3)+(n3*5))/(2+3+5);

        if(mediap>= 8.0 && mediap <=10.0){
            notas[i] = 'A';
            medG[i] = mediap;
        }
        if(mediap >= 7.0 && mediap <=8.0){
            notas[i] = 'B';
            medG[i] = mediap;
        }
        if(mediap >= 6.0  && mediap <=7.0){
            notas[i] = 'C';
            medG[i] = mediap;
        }
        if(mediap >= 5.0 && mediap <=6.0){
            notas[i] = 'D';
            medG[i] = mediap;
        }
        if(mediap >= 0.0 && mediap <=5.0){
            notas[i] = 'E';
            medG[i] = mediap;
        }


    }
    int a = sizeof(notas);
    for(int i = 0; i < a; i++){
        printf("\nO aluno da posicao %dº obteve: %c com nota \t %f;",i, notas[i], medG[i]);
    }

    float mdG, md;
    int b = sizeof(medG);
    for(int i = 0; i < b; i++){
        mdG = mdG+medG[i];
    }
    md = mdG/totAlun;
    printf("\n\nMedia geral da turma: \t%f", md);


    return 0;
}
