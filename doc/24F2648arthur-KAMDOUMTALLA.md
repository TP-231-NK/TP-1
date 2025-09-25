Dans la réalisation de ce TP ,j'ai eu à concevoir ou à réaliser 3 programme dont les détailles sont les suivantes:

# programme somme matrice :

 Ce programme est conçu pour la somme de matrice de même dimension car on ne sommer des matrices de dimension différente. Ce programme qui somme deux matrices prend deux tableaux de nombres de même taille et produit un nouveau tableau où chaque case est la somme des deux cases correspondantes comme suivant :
C[i][j] = A[i][j] + B[i][j] 
 # produit de deux matrices:
 Ce programme est conçu de manière à demander à l'utilisateur d'entrée le nombre de ligne et de colonne des matrices à multiplier. Cela est Possible si et  seulement si le nombre de colonne de la première matrices est égal au nombre de ligne  de la seconde matrices , on multiplie élément par élément :
C[i][j] += A[i][k] * B[k][j] 
en ayant initialiser C[i][j] à 0 au préalable.
