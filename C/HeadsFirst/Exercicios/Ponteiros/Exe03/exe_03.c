/*
 * EXERCÍCIO:
 * Implemente uma função que troque o valor de duas variáveis inteiras utilizando ponteiros.
 * Teste a função em um programa principal.
*/

# include <stdio.h>

int change_values(int valor1, int valor2) {
    // * Variável temporária que armazenará o valor2:
    int temp;

    //* Ponteiros:
    int *ponteiro1;
    int *ponteiro2;

    // * Pegando endereços:
    ponteiro1 = &valor1;
    ponteiro2 = &valor2;

    // * Pegando o valor2:
    temp = *ponteiro2;

    printf("Antes da troca:\nvalor1: %i\nvalor2: %i\n", *ponteiro1, *ponteiro2);

    // * Invertendo os valores:
    *ponteiro2 = *ponteiro1;
    *ponteiro1 = temp;

    printf("-----------------------\nDepois da troca:\nvalor1: %i\nvalor2: %i\n", *ponteiro1, *ponteiro2);
}

int main() {
    // * Declaração das variáveis:
    int valor1 = 149;
    int valor2 = 398;

    // * Chamando a função que troca os valores:
    change_values(valor1, valor2);

    return 0;
}
