# include <stdlib.h>
# include <stdio.h>

// * ESTUDOS COM FGETS:

// * fgets() é uma função um pouco mais segura e mais autônoma que o scanf.
// * Isso por que podemos mandar ele definir sozinho o limite de caracteres do input:
int main() {
    char food[5]; // * Definição da variável

    puts("Qual a sua comida favorita? ");
    fgets(food, sizeof(food), stdin);

    // * fgets(variável, max. dígitos, stdin);
    // * variável = Variável que vai receber o input;
    // * max. dígitos = Número de caracteres que serão lidos (Delimita com base no limite da variável):
    // * food[5] => sizeof(food) = 4 => Limite de caracteres = 4;
    // * stdin = Os dados virão do teclado do computador.

    printf("%s", food);
    return 0;
}
