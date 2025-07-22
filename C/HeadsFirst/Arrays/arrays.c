
/* ESTUDO COM ARRAYS:
* Pequeno exercício usando arrays.
! ARRAYS SEMPRE COMEÇAM EM 0!!!
! int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
!                0  1  2  3  4  5  6  7  8   9
*/

# include <stdio.h>
# include <stdlib.h>

int main()
{
    int contestants[] = {1, 2, 3}; // * Definindo um array
    // * Index:          0, 1, 2
    int *choice = contestants; // * O ponteiro aponta para o primeiro valor do array (index 0).
    contestants[0] = 2; // * O index 0 agora irá armazenar o número 2.
    contestants[1] = contestants[2]; // * O index 2 agora irá armazenar o número 3, pois ele está no index 2
    contestants[2] = *choice; // * O index 2 recebe o primeiro valor do array: 2.
    // * Logo, o array fica assim: {2, 3, 2}
    // * Index:                     0, 1, 2

    printf("Eu escolho o participante nº %i.\n", contestants[2]);
    
    // * Acessando um valor específico do array:
    int new_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // * Index:        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

    int *new_choice = contestants[8]; // * Aqui, pegamos o número 7...
    printf("%i\n", new_choice); // * E imprimimos ele.
    return 0;
}
