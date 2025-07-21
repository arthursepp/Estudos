
/* PONTEIROS.C
 * Estudo de ponteiros com a linguagem C.
 */

# include <stdio.h>
# include <stdlib.h>

/* * Acessando o endereço de X na memória: */
int main() {
    int x = 10; /* * Definindo uma variável */
    int *adress = &x; /* * Pegando o endereço onde a variável x está */
    printf("Endereco de x: %i\n", adress); /* * Imprimindo ele */
    int value = *adress; /* * Pegando diretamente o valor armazenado no endereço que capturamos anteriormente */
    printf("Valor armazenado no endereco %i:\n %i\n", adress, value); /* * Imprimindo ele */
    /* * Simplificando o código de captura do valor armazenado no endereço: */
    printf("Valor armazenado no endereco %i: %i\n", &x, *&x);

    return 0;
}
