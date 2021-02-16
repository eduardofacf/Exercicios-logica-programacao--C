#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == j){
                printf("%d ", mat[i][j]);
            }
        }
    }

    cont = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] < 0){
                cont++;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", cont);

    return 0;
}
