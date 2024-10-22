#include <stdio.h>

int main(void)
{
    FILE *iFile;
    float number, biggerNum;
    int currentNum, position = 1, biggerPosition = 1;

    // Abre el archivo
    iFile = fopen("my_first_file.txt", "r");

    // Leer el primer número del archivo
    if (fscanf(iFile, "%f", &number) == EOF) {
        printf("El archivo está vacío.\n");
        fclose(iFile);
        return 0;
    }

    // Inicializar el primer número como el más grande
    biggerNum = number;

    // Bucle para leer el resto de los números
    while ((currentNum = fscanf(iFile, "%f", &number)) != EOF) {
        position++; // Aumenta la posición con cada número leído

        // Si se encuentra un número mayor
        if (number > biggerNum) {
            biggerNum = number;
            biggerPosition = position; // Guardar la posición del número mayor
        }
    }

    // Cerrar el archivo
    fclose(iFile);

    // Comprobar si el número mayor es el primero o no
    if (biggerPosition == 1) {
        printf("Yes\n"); // El primero es el mayor
    } else {
        printf("No, el mayor es el número en la posición %d\n", biggerPosition); // El mayor no es el primero
    }

    return 0;
}
