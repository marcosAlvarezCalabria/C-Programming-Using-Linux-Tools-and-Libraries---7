
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {

        printf("Invalid input.");
        return 1;
    }

    // Convertir los argumentos de la línea de comandos a los tipos adecuados
    int num_plants = atoi(argv[1]);
    double price_per_plant = atof(argv[2]);

    if (num_plants <= 0 || price_per_plant <= 0) {
        // Verificar si los valores son válidos
        printf("Invalid input.\n");
        return 1;
    }

    // Calcular el total
    double total_price = num_plants * price_per_plant;

    // Imprimir la factura en el formato adecuado
    printf("%d plants for %.2f dollars each cost %.2f dollars.\n", num_plants, price_per_plant, total_price);

    return 0;
}
