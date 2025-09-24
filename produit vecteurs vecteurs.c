#include <stdio.h>

int main() {
    int n, i;
    
    printf("Entrez le nombre de coordonné de chaque  vecteurs : ");
    scanf("%d", &n);
  int A[n], B[n], C[n];
  
    printf("Entrez les coordonées du vecteur  A :\n");
    for(i = 0; i < n; i++) {
        printf("A[%d] = ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Entrez les coordonnées du vecteur B :\n");
    for(i = 0; i < n; i++) {
        printf("B[%d] = ", i+1);
        scanf("%d", &B[i]);
    }

    
    for(i = 0; i < n; i++) {
        C[i] = A[i] * B[i];
    }

    printf(" le résultat de la multiplication est C = :\n");
    for(i = 0; i < n; i++) {
        printf("C[%d] = %d\n", i+1, C[i]);
    }

    return 0;
}