
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

/*
 * Exercício:
 * Faça um programa que recebe um dado e busca uma string dentro do array tracks.
 */

char tracks[][80] = {
    "From Here to Eternity - Iron Maiden",
    "Strutter - Kiss",
    "Master of Puppets - Metallica",
    "Fly me To the Moon - Frank Sinatra",
    "War Pigs - Black Sabbath"
};

void find_track(char search_for[]) {
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for)) {
            printf("Track %i: '%s'\n", i, tracks[i]);
        }
    }
}

int main() {
    char search_for[80];
    printf("Buscar por: ");
    fgets(search_for, 80, stdin);
    search_for[strcspn(search_for, "\n")] = '\0';
    find_track(search_for);
    return 0;
}
