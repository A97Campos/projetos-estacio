#include <stdio.h>

int main() {

    int a = 5;
    int b = 10;
    float c = 10;
    float d = 2.5;

    int soma = a + b;
    int subtracao = b - a;
    float multiplicacao = c * d;
    float divisao = (float) c / d;

    printf("soma: %d\n", soma);
    printf("subtração: %d\n", subtracao);
    printf("Multiplição: %.2f\n", multiplicacao);
    printf("divisão: %.2f\n", divisao);

    return 0;
}