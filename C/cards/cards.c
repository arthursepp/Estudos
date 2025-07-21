/* * CARDS.C:
 * Algoritmo que conta cartas para um jogo de blackjack, e mostra o valor de
 * uma carta inserida pelo usuário

 * Blackjack:
 * J, Q, K e 10: Todas valem 10.
 * A: Vale 11
 */

#include <stdio.h>
#include <stdlib.h>

/* *CARDS V1: */
// int main() {
//     char card_name[3]; /* * Iniciando a variável que recebe o nome da carta. É um array de até 3 chars. */
//     puts("Enter the card name:"); /* * Imprimindo a mensagem no console */
//     scanf("%2s", card_name); /* * Recebendo 2 caracteres e colocando eles na var card_name */
//     int val = 0; /* * Variável que dita o valor da carta inserida no input */
//
//     if (
//         card_name[0] == 'K' ||
//         card_name[0] == 'Q' ||
//         card_name[0] == 'J'
//     )
//     { /* * Se a carta inserida for K, Q, ou J, o valor dela será 10. */
//         val = 10;
//         printf('Count has gone up');
//     } else if (card_name[0] == 'A') {
//         val = 11; /* * Caso seja um A, será 11. */
//     }
//     else {
//         val = atoi(card_name); /* * Caso não seja nenhum deles, converta o valor para string. */
//     }
//     if (val >= 3 && val <= 6) { /* * Se o valor inserido estiver entre 3 e 6, imprima a mensagem. */
//         puts("Count has gone up");
//     } else if (val == 10 || val == 11) {
//         puts("Count has gone down"); /* * Se for um K, Q, J ou A, imprima esta outra mensagem. */
//     }
//     printf("The card value is: %i\n", val); /* * Finalmente, imprime o valor da carta inserida. */
//     return 0;
// }

// int main() {
//     char card_name[3]; /* * Iniciando a variável que recebe o nome da carta. É um array de até 3 chars. */
//     puts("Enter the card name:"); /* * Imprimindo a mensagem no console */
//     scanf("%2s", card_name); /* * Recebendo 2 caracteres e colocando eles na var card_name */
//     int val = 0; /* * Variável que dita o valor da carta inserida no input */
//
//     switch (card_name[0]) {
//         case 'K':
//         case 'Q':
//         case 'J':
//             val = 10;
//             break;
//         case 'A':
//             val = 11;
//             break;
//         default:
//             val = atoi(card_name);
//     }
//
//     printf("The card value is: %i\n", val); /* * Finalmente, imprime o valor da carta inserida. */
//
//     // if (
//     //     card_name[0] == 'K' ||
//     //     card_name[0] == 'Q' ||
//     //     card_name[0] == 'J'
//     // )
//     // { /* * Se a carta inserida for K, Q, ou J, o valor dela será 10. */
//     //     val = 10;
//     //     printf('Count has gone up');
//     // } else if (card_name[0] == 'A') {
//     //     val = 11; /* * Caso seja um A, será 11. */
//     // }
//     // else {
//     //     val = atoi(card_name); /* * Caso não seja nenhum deles, converta o valor para string. */
//     // }
//     if (val >= 3 && val <= 6) { /* * Se o valor inserido estiver entre 3 e 6, imprima a mensagem. */
//         puts("Count has gone up");
//     } else if (val == 10 || val == 11) {
//         puts("Count has gone down"); /* * Se for um K, Q, J ou A, imprima esta outra mensagem. */
//     }
//
//     return 0;
// }
