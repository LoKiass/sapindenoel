#include <stdio.h>

int main(void) {
    int x, y;
    int espace, hauteur;
    hauteur = 10;

    for (x = 1; x <= hauteur; x++) {
        for (espace = 1; espace <= hauteur - x; espace++) {
            printf(" ");
        }
        for (y = 1; y <= (2 * x - 1); y++) {
            printf("*");
        }
        printf("\n");
    }
    getchar();
    return 0;
}