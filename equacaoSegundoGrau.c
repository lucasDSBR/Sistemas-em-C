/*
*
* Equação do Segundo Grau;
*   Desenvolvido em: 09/08/2021;
*   Desenvolvido por: Lucas Silva;
*
*/

/* IMPORTAÇÃO DE BIBLIOTECAS */
#include<stdio.h>
float equacao(float a, float b, float c){
    float delta, x1, x2, raizDelta;
    delta = (b*b)-(4*a*c);
    raizDelta = sqrt(delta);
    x1 = (-b + raizDelta)/(2*a);
    x2 = (-b - raizDelta)/(2*a);

    printf("%f ------ %f", x1, x2);
    return 0;
}


int main(){
    float a, b, c;
    char raiz1[20], raiz2[20];
	printf("================================\n");
    printf("=====EQUACAO DO SEGUNDO GRAU====\n");
    printf("================================\n");
    printf("================================\n");
    printf("=====    2X^2 +4X – 6 = 0   ====\n");
    printf("================================\n");
    printf("Informe os valores de 'a', 'b' e 'c' ( Exemplo: 1 -1 -12 ):\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Coeficientes para salvar valores(Exemplo: raiz1 raiz2):\n");
    scanf("%s %s", &raiz1, &raiz2);
    printf("%s ------- %s \n",raiz1, raiz2);
    equacao(a, b, c);
	return 0;
}
