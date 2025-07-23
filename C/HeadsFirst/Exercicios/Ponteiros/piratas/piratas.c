
# include <stdlib.h>
# include <stdio.h>

void go_to_southeast(int *lat, int *lon) {
    *lat = *lat -1;
    *lon = *lon +1;
}

int main() {
    int lat = 32;
    int lon = -64;
    go_to_southeast(&lat, &lon);
    printf("Estamos em [%i,%i].", lat, lon);
}
