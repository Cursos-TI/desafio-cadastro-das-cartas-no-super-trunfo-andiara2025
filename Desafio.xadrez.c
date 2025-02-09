#include <stdio.h>
int main (){

    char pais[50];
    char estado[50];
    char cidade[50];
    int pontos_turisticos;
    float populacao;
    float area; 
    double PIB;

    printf("digite o nome do pais:\n");
    scanf ("%s", pais);

    printf("digite o nome do estado:\n");
    scanf("%s", estado);

    printf("digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("populacao:\n");
    scanf("%f", &populacao);

    printf("area:\n");
    scanf("%f, &area");

    printf("PIB:\n");
    scanf("%lf", &PIB);

    printf("pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);

    return 0;
}






