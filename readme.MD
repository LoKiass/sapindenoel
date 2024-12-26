# Sapin de Noël en ASCII avec Tronc

Ce programme C génère un sapin de Noël en ASCII avec un tronc. La hauteur du sapin et du tronc est configurable, offrant un affichage esthétique et symétrique.

---

## Fonctionnalités

- Affiche un sapin de Noël proportionnel avec un tronc en ASCII.
- La hauteur du sapin et la taille du tronc sont configurables via une variable.

---

## Code

```c
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
```

---

## Explications

1. **Initialisation des variables :**
   - `hauteur` : définit la hauteur totale du sapin (modifiable selon les besoins).
   - `x` : contrôle les lignes du sapin et du tronc.
   - `espace` : détermine les espaces avant chaque ligne pour centrer le sapin et le tronc.
   - `y` : gère le nombre d'étoiles à afficher par ligne dans le sapin.

2. **Boucles principales :**
   - **Sapin :**
      - Une boucle externe pour les lignes du sapin.
      - Une boucle interne pour les espaces nécessaires pour centrer chaque ligne.
      - Une autre boucle interne pour afficher les étoiles, suivant la règle `(x * 2 - 1)`.
   - **Tronc :**
      - Une boucle pour afficher un tronc centré, composé de plusieurs lignes (`hauteur / 3`).

3. **Formule des étoiles :**
   - Le nombre d'étoiles par ligne dans le sapin suit la règle : `2x - 1`. Cela permet d'avoir :
      - 1 étoile à la première ligne.
      - 3 étoiles à la deuxième ligne.
      - Et ainsi de suite, augmentant de 2 étoiles par ligne.

4. **Affichage du tronc :**
   - Le tronc est centré en fonction de la hauteur du sapin et composé de deux barres `||`.

---

## Exemple de sortie

Avec `hauteur = 10`, le programme produit :

```
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
         ||
         ||
         ||
```
