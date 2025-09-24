#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>
int compareInts(const void *a, const void *b) {
    int num1 = *((int *)a); 
    int num2 = *((int *)b);

    if (num1 > num2) return 1; 
    if (num1 < num2) return -1; 
    return 0; 
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    if (taille <= 0) {
        printf("La taille du tableau doit être positive.\n");
        return 1; 
    }

    
    int tableau[taille];
    printf("Entrez les %d éléments du tableau : \n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    qsort(tableau, taille, sizeof(int), compareInts);
    
    float mediane;
    if (taille % 2 == 0) {
        int milieu1 = tableau[taille / 2 - 1];
        int milieu2 = tableau[taille / 2];
        mediane = (float)(milieu1 + milieu2) / 2.0;
    } else { 
        mediane = (float)tableau[taille / 2];
    }

    printf("Tableau trié : [");
    for (int i = 0; i < taille; i++) {
        printf("%d%s", tableau[i], (i == taille - 1) ? "" : ", ");
    }
    printf("]\n");

    printf("La médiane du tableau est : %.2f\n", mediane);

    return 0; 
}