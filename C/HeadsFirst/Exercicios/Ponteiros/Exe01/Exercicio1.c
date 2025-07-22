
# include <stdlib.h>
# include <stdio.h>

/*
 * Escreva um programa em C que declare duas variáveis inteiras e um ponteiro.
 * Faça com que o ponteiro aponte para uma das variáveis e use-o para alterar o valor da variável.
 * Depois, aponte o ponteiro para a segunda variável e faça o mesmo.
 */

int main() {
    int valor1 = 10, valor2 = 20; // * Declarando as variáveis
    int *ponteiro; // * Ponteiro

    ponteiro = &valor1; // * Conectando o ponteiro ao valor da variável
    *ponteiro = 40; // * Adicionando 40 ao valor da variável

    printf("%i\n%i\n---------------\n", *ponteiro, valor1);

    // * Fazendo o mesmo processo:
    ponteiro = &valor2;
    *ponteiro = 50;
    printf("%i\n%i\n---------------\n", *ponteiro, valor2);
    return 0;
}
