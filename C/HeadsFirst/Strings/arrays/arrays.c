# include <stdio.h>
# include <stdlib.h>

/*
 * ARRAYS
 * Arrays são um conjunto de itens DO MESMO TIPO.
 * Eles precisam ter um comprimento definido para todos os itens.
 *
 * char lista_de_compras[][95] = {"Ketchup", "Maca", "Farinha", "Sucrilhos"};
 *                        index:      0         1       2            3
 *
 * Todos os itens da lista de compras podem ter até 95 caracteres.
 * Caso tenham menos, o C automaticamente substitui eles pelo operador "/0", até chegar ao limite de chars.
 *
 * Podemos acessar um item específico do array da seguinte forma:
 * printf("%s", lista_de_compras[0]); // * Retorno: Ketchup
 *
 * Ou, acessar um caractere específico de um dos itens do array:
 * printf("%c", lista_de_compras[1][2]); //
 *
 * Strings já são um array.
 * Um array de strings é, basicamente, um array de arrays.
 * Ou seja: Strings também possuem um index, cujo também começa em 0.
 *
 * char lista_de_compras[][95] = { "Maca", "Banana", "Melancia" }
 *                        index:      0        1         2
 *
 * Maca => { "M", "A", "C", "A" }
 *  index:    0    1    2    3
 *
 * Logo, quando fazemos "printf("%c", lista_de_compras[0][2]);" para a nova lista de compras,
 * Acessamos o objeto "Maçã", que está no index 0 do array, e o caractere "C", que está no index 2
 * da string.
 */

int main() {
    char lista_de_compras[][95] = {
        "Maca",
        "Banana",
        "Pera",
        "Uva",
        "Mamao",
        "Morango",
        "Caqui",
        "Melao",
        "Melancia"
    };
    printf("%s", lista_de_compras[0]);
    return 0;
}
