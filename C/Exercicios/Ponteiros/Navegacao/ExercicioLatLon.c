
# include <stdlib.h>
# include <stdio.h>

void go_to_southeast(int *lat, int *lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main() {
    int latitude = 32;
    int longitude = -64;
    go_to_southeast(&latitude, &longitude);
    printf("Estamos em [%i, %i]", latitude, longitude);
    return 0;
}
