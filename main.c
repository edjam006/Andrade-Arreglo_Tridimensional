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

    return 0;
}