#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x, y;
    int base, hauteur;
    hauteur = 5;
    for (x = 1; x <= hauteur; x++) { // Gestion du premier X + De la hauteur totale du sapin
        for(y = 1; y <= (x * 2 - 1); y++) {
            printf("*");
        }
        printf("\n");
    }
    getchar();
}


