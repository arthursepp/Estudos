
// * Strlen é uma função da biblioteca <string.h> que conta os caracteres de uma string.

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
    char texto[] = "Esse é um texto genérico que estou usando para testar a função strlen.";
    int length = strlen(texto);
    printf("%i", length);
    return 0;
}