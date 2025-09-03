#include <stdio.h>

int main() {
    char estado[50], codigoDaCarta[50], nomeDaCidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    //Carta 1

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o Código da carta: \n");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Digite a Área do Estado: \n");
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib);

    printf("Carta 1: \n Estado: %s \n Código: %s \n Nome da cidade: %s \n População: %d \n Área: %f \n Pib: %f \n Número de pontos turísticos: %d \n", estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, pontosTuristicos);

    //Carta 2

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o Código da carta: \n");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Digite a Área do Estado: \n");
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib);

    printf("Carta 2: \n Estado: %s \n Código: %s \n Nome da cidade: %s \n População: %d \n Área: %f \n Pib: %f \n Número de pontos turísticos: %d \n", estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, pontosTuristicos);

    return 0;
}