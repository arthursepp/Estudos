/*
 * Calculadora de porcentagem
 * O código abaixo calcula x porcento de um determinado número.
 */

# include <stdio.h>
# include <stdlib.h>

int main() {
    // * Declaração de variáveis:
    char aux[3];
    char aux2[3];

    // * Recebendo o valor base:
    printf("Insira um numero: ");
    scanf("%s", aux);

    // * Convertendo para float o valor base e ligando um ponteiro a ele:
    float valor = atoi(aux);
    float *ponteiro1 = &valor;

    // * Pegando a porcentagem desejada pelo usuário:
    printf("Quantos porcento de %.2f voce procura?", *ponteiro1);
    scanf("%s", aux2);

    // * Convertendo a porcentagem para floar e ligando um ponteiro a ela:
    float porcentagem = atoi(aux2);
    float *ponteiro2 = &porcentagem;

    // * Realizando a operação de calculo da porcentagem:
    float quoc = (*ponteiro2 / 100) * *ponteiro1;

    printf("%.2f porcento de %.2f e %.2f.", *ponteiro2, *ponteiro1, quoc);

    return 0;
}
