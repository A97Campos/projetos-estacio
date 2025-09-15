#include <stdio.h>

int main() {
    float nota1, nota2;
    float media;

    printf("Digite a primeia nota:");
    scanf("%f", &nota1);

    printf("digite a segunda nota:");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Resultado: %.2f", media);// o .2f limita a 2 casa decimais

    return 0;
}