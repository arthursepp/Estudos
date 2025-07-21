
// ! Definição para usar caracteres especiais (UTF8):
# define SIZE 20

/*
* IDENTIFICADORES DE FORMATAÇÃO:
* Em C, usamos identificadores para uma melhor formatação do retorno
* do código:

? IDENTIFICADORES DE INTEIROS:
* %d ou %i => Inteiros decimais (42);
* %u => Inteiros ou decimais SEM SINAL ()
* %x => Hexadecimais (255 = ff)
* %X => Hexadecimais, mas em maiúsculo (255 = FF)
* %o => Octal (64 = 100)

? IDENTIFICADORES DE FLOAT:
* %f => Float padrão (3.14159)
* %e ou %E => Notação científica (printf("%e", 1000.0) => 1.000000e+03)
* %g ou %G => Escolhe automaticamente entre %f e %e (printf("%g", 0.0000123); → 1.23e-05)

? IDENTIFICADORES DE STRING:
* %c => Caractere (printf("%c", 'A') => A)
* %s => String(array de chars) (printf("%s", "Olá") => Olá)

? IDENTIFICADORES DE PONTEIROS:
* %p => Ponteiro:
*   int main() {
*       int variavel = 10;
*       int *ponteiro = variavel;
*       printf("%p", &ponteiro);
*       return 0;
*   }
*/

# include <stdio.h>
# include <stdlib.h>

int main() {
    int variavel = 10;
    int *ponteiro = variavel;
    printf("%p", &ponteiro);
    return 0;
}