# Sapin de Noël en ASCII

Ce programme C génère un sapin de Noël en ASCII en fonction d'une hauteur prédéfinie. Il utilise des boucles imbriquées pour aligner correctement les espaces et les étoiles, créant ainsi un sapin symétrique.

---

## Fonctionnalités

- Affiche un sapin de Noël proportionnel en ASCII.
- La hauteur du sapin est configurable via une variable.

---

## Code

```c
#include <stdio.h>
#include <stdlib.h>

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
```

---

## Explications

1. **Initialisation des variables :**
    - `hauteur` : définit la hauteur totale du sapin (modifiable selon les besoins).
    - `x` : contrôle les lignes du sapin (de 1 à `hauteur`).
    - `espace` : détermine les espaces avant chaque ligne d'étoiles pour centrer le sapin.
    - `y` : gère le nombre d'étoiles à afficher par ligne.

2. **Boucles principales :**
    - **Boucle externe (`x`) :** itère sur chaque ligne du sapin.
    - **Boucle interne 1 (`espace`) :** imprime les espaces nécessaires pour centrer les étoiles.
    - **Boucle interne 2 (`y`) :** imprime les étoiles, en augmentant progressivement leur nombre selon la formule `(2 * x - 1)`.

3. **Formule des étoiles :**
    - Le nombre d'étoiles par ligne suit la règle : `2x - 1`. Cela permet d'avoir :
        - 1 étoile à la première ligne.
        - 3 étoiles à la deuxième ligne.
        - Et ainsi de suite, augmentant de 2 étoiles par ligne.

4. **Affichage final :**
    - Une fois toutes les lignes dessinées, le programme attend une entrée utilisateur grâce à `getchar()` avant de terminer.

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
```