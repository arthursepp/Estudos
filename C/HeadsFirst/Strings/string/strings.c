
/* ESTUDOS COM STRINGS
* Strings em C são um array de caracteres. Elas são definidas pelo tipo 'char':
* char euSouUmaString[] = "Ola humano!"
* euSouUmaString{"O","l","a"," ","h","u","m","a","n","o"}

* Uma string pode ou não ter seu tamanho definido.
* String com tamanho definido:
* char stringComOnzeLetras[12] = "Ola humano!\0";
* char stringCom_N_Caracteres[] = "Ola humano! Eu sou uma string genérica!\0"

* STRINGS LITERAIS:
* Strings literais são textos pré-definidos que NÃO PODEM ser alterados.
* Exemplo: char *texto = 'JQK'
* texto[0] = 'A' --> Isso não vai funcionar
* Strings só podem ser alteradas caso sejam definidas como arrays:
* char texto[] = 'JQK'
* texto[0] = 'A' --> Isso vai funcionar.

! IMPORTANTE: Strings SEMPRE PRECISAM terminar com o caracetere "\0".
*/

# include <stdlib.h>
# include <stdio.h>

int main() {
    char stringComOnzeLetras[12] = "Ola humano!\0";
    char *ponteiro = stringComOnzeLetras;
    printf("%s\n", ponteiro);
    printf("Letra O: %c\n", stringComOnzeLetras[0]);
    printf("Letra l: %c\n", stringComOnzeLetras[1]);
    printf("Letra a: %c\n", stringComOnzeLetras[2]);    
    return 0;
}