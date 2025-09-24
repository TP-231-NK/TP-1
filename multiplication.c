#include <stdio.h>

int main() {
        int a, b, c=0;
        printf("Entrer deux nombres entiers: \n");
        scanf("%d %d", &a, &b);
        printf("\n %d * %d = ", a, b);
        for(int q=0; q<a; q++){
                for(int w=0; w<b; w++){
                        c = c + 1;
                }
        }
        printf("%d\n\n", c);
        return 0;
}
