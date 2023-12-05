
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int a, b, c;
    printf("Ingrese cuantas matrices desea imprimir : \n");
    scanf("%d", &a);
    printf("Ingrese filas: \n");
    scanf("%d", &b);
    printf("Ingrese columnas: \n");
    scanf("%d", &c);

    
    int Matriz[a][b][c];

    
    printf("Matriz");

    
    for (int k = 0; k < c; k++) {
        printf("\nMatriz %d:\n", k + 1);
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (k == c - 1) {
                    
                    Matriz[k][i][j] = 1;
                } else {
                    
                    Matriz[k][i][j] = 0;
                }
                
                printf("%d\t", Matriz[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

