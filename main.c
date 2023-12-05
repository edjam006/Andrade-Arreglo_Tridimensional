#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int a, b, c;
    printf("Ingrese el numero de filas de la matriz\n");
    scanf("%d", &a);
    printf("Ingrese el numero de columnas de la matriz\n");
    scanf("%d", &b);
    printf("Ingrese la tercera dimension de la matriz\n");
    scanf("%d", &c);

    int matriz[a][b][c];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                 if (i == c - 1) {
                    matriz[i][j][k] = 1; // Última "capa" inicializada con unos
                } else {
                    matriz[i][j][k] = 0; // Resto con ceros
                }
            }
        }
        
    }
    return 0;
}