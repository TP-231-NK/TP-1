#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main()
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int i, j, k,m,n,a,b;
    printf("Entrez le nombre de ligne de la matrice A: ");
    scanf("%d",&i);
    printf ("Entrez le nombre de colonne  de la matrice A : ");
    scanf("%d",&j);
    printf("Entrez le nombre de ligne de la matrice B :");
    scanf("%d",&m);
     printf ("Entrez le nombre de colonne  de la matrice B : ");
     scanf("%d",&n);
     if(j!=m){
         printf("produit impossible ");
         return 0;
     }
   
    printf("Entrez les élements de la matrice A  :\n");
    
    for (a = 0; a < i; a++)
    {
        for (b= 0; b < j; b++)
        {
            printf("A[%d][%d] =", a + 1, b + 1);
            scanf("%d", &A[i][j]);
        }
    }
     for (a = 0; a < i; a++)
    {
        for (b = 0; b< j; b++)
        {
            printf("%4d", A[a][b]);
        }
        printf("\n");
    }
    printf("Entrez les element de la matrice B :\n ");
    for (a= 0; a < m; a++)
    {
        for (b= 0; b< n; b++)
        {
            printf("B[%d][%d]=", a+ 1, b + 1);
            scanf("%d", &B[m][n]);
        }
    }
     for (a = 0; a < m; a++)
    {
        for (b = 0; b< n; b++)
        {
            printf("%4d", B[a][b]);
        }
        printf("\n");
    }

    for (a= 0; a< i; a++)
    {
        for (b= 0; b < j; b++)
        {
          C[a][b]=0;
           
            for (k = 0; k < m; k++)
            {
                C[a][b] += A[a][k] * B[k][b];
            }
        }
    }

    printf(" la matrice produit C=A*B est: \n");

    for (a = 0; a < i; a++)
    {
        for (b = 0; b< j; b++)
        {
            printf("%4d", C[a][b]);
        }
        printf("\n");
    }
    return 0;
}
