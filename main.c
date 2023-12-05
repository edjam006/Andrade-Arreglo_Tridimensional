
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int a, b, c;
    printf("Ingrese cuantas matrices desea imprimir : \n"); //Solicitud de cuantas caras desea imprimir el usuario
    scanf("%d", &a);
    printf("Ingrese el numero de filas que desea ingresar: \n"); //Solicitud de numeros de filas 
    scanf("%d", &b);
    printf("Ingrese el numero de columnas que desea ingresar: \n"); //Solicitud de numero de columnas
    scanf("%d", &c);

    int Matriz[a][b];


    for (int k = 0; k < a; k++) { // Este for comienza a recorrer desde la cantidad de matrices que se indica en la primera solicitud 
        printf("Matriz %d:\n", k + 1); // Imprime el número de la matriz actual, comenzando desde 1 ya que se habia inicializado en la linea anterior a k= 0
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < c; j++) {
                if (k == a - 1) { // Condición para verificar si estamos en la última matriz cuando 'k' es igual a 'a - 1' ya que el indice de la matriz o arreglo siempre comienza desde 0 por lo que hay que retroceder un espacio con el - 1
                    Matriz[i][j] = 1;  // Asigna 1 a todos los elementos de la última matriz
                } else {
                    Matriz[i][j] = 0;  // Asigna 0 a todos los elementos de las demas matrices que no sea de la ultima matriz
                }
                printf("%d\t", Matriz[i][j]); // Se imprime cada elemento de cada matriz 
            }
            printf("\n"); // Salto de linea a la siguiente fila para que se observe mejor en la terminal 
        }
        printf("\n"); //Salto de linea para la siguiente matriz 
    }

    return 0;
}

    
