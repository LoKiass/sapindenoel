#include <stdio.h>

int main(void) {
    int x, y;
    int hauteur, espace;
    hauteur = 10;
    for (x = 1; x <= hauteur; x++) {
        for (espace = 1; espace <= hauteur - x; espace++) {
            printf(" ");
        }
        for (y = 1; y <= (x * 2 - 1); y++) {
            printf("*");
        }
        printf("\n");
    }
    for (x = 1; x <= hauteur / 3; x++) {
        for (espace = 1; espace <= hauteur - 1; espace++) {
            printf(" ");
        }
        printf("||\n");
    }
    getchar();
}