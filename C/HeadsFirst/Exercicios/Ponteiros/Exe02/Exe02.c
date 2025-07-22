/*
 * Exercício:
 *  Crie uma função que receba dois ponteiros para inteiros como argumentos e retorne a soma dos valores apontados.
 *  Escreva um programa que use esta função.
 */

# include <stdlib.h>
# include <stdio.h>

// * Função que soma os valores apontados por dois ponteiros:
int soma(int *ponteiro1, int *ponteiro2) { // * Recebendo dois ponteiros
    return printf("%i", *ponteiro1 + *ponteiro2); // * Somando o valor armazenado nos endereços que eles apontam
}

int main() {
    int valor1, valor2;
    int *ponteiro1, *ponteiro2;

    // * Valores para a soma:
    valor1 = 20;
    valor2 = 20;

    // * Pegando os endereços das variáveis:
    ponteiro1 = &valor1;
    ponteiro2 = &valor2;

    // * Enviando os parâmetros para a função
    soma(ponteiro1, ponteiro2);

    return 0;
}
