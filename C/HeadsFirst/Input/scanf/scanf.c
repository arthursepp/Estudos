// ! Definição para usar caracteres especiais (UTF8):
# define SIZE 20

# include <stdlib.h>
# include <stdio.h>
# include <locale.h>

// * ESTUDOS COM SCANF:

//* Scanf recebe dados e os insere em variáveis:
int main() {
    setlocale(LC_ALL, "UTF-8");
    // * Definindo as variáveis:
    char nome[20];
    char sobrenome[20];
    int idade;

    printf("Digite seu nome e seu primeiro nome: "); // * Scanf apenas recebe dados, não imprime nada.
    scanf("%19s %19s", nome, sobrenome); // * Recebendo até 19 chars de cada string, e colocando-os nas variáveis
    // * C adiciona automaticamente o "\0" ao final dos dados inseridos.

    printf("Digite agora a sua idade: ");
    scanf("%i", &idade); // * Precisamos definir o tipo de dado que o scanf receberá:
    // * Observe o 's' no primeiro scanf (%19s). Ele define que o dado será uma string.
    // * O mesmo ocorre aqui, mas de maneira mais flexível, já que não definimos um limite.

    printf("Primeiro: %s \nUltimo: %s\nIdade: %i\n", nome, sobrenome, idade);

    // ! Quando tratamos de strings no scanf, precisamos SEMPRE definir um limite para os caracteres no input.

    return 0;
}
