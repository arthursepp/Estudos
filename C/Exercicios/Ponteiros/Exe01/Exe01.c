# include <stdio.h>
# include <stdlib.h>

int main() {
    int valor1, valor2;
    int *ponteiro;

    valor1 = 10;

    ponteiro = &valor1; // * Pegando o endereço da variável
    printf("%i\n", ponteiro);

    *ponteiro = *ponteiro + 10; // * Alterando o valor da variável (valor1) e, por consequência, o do ponteiro.
    printf("------------\nValor do ponteiro: %i\nValor da variável: %i\n", *ponteiro, valor1);

    valor2 = 20;
    ponteiro = &valor2;
    *ponteiro = *ponteiro - 20;
    printf("------------\nValor do ponteiro: %i\nValor da variável: %i\n", *ponteiro, valor2);

    return 0;
}
