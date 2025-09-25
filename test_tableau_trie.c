#include<stdio.h>

void saisirtableau(int n,int v[n]){
    printf("\n---Saisisez votre untableau---\n");
    for(int i=0;i<n;i++){
      printf("V[%d]=",i);
      scanf("%d",&v[i]);
    }
}
int main(){
    int n,i,k;
    printf("Enter la dimension du tableau:");
    scanf("%d",&n);
    printf("Entre les elements( nombre entier )du tableau\n");
    int tab[n];
    saisirtableau(n,tab);
    for(i=0;i>n-1;i++){
    if(tab[i]<tab[i+1])
    k=1;
    else 
    k=0;
        break;
    }
    if(k==0) printf(" les elements du tableau sont dans un  ordre non croissant\n");
    else printf(" les elements du tableau sont dans l'orde croissant \n");
    return 0;
}
