#include <stdio.h>

int main() {
    int n;
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Entrez %d entiers pour le tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nLe tableau inversé est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}