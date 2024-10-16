/* Estás impartiendo una clase sobre programación en C. El tema de su próxima 
conferencia son las bibliotecas (¡qué coincidencia!). 
Le gustaría enseñar sobre el uso de la biblioteca de matemáticas en C. Para lograrlo, 
ha escrito un programa que pretende discutir con sus alumnos durante la próxima clase. 

Su programa primero debe leer del usuario un número entero y luego tomar 
la raíz cuadrada de ese número entero e imprimirlo con 8 decimales. 
A continuación, su programa debería encontrar e imprimir (en una nueva línea) 
la constante matemática e (constante de Euler) con 10 decimales. 
Para encontrar e, use la función matemática exp() y observe que e = exp(1).

Finalmente, para recordar a sus alumnos cómo usar el compilador, 
imprima (en una nueva línea) el comando correcto del compilador para vincular 
la biblioteca de matemáticas con su programa. 
Tenga en cuenta que en el ejemplo que se muestra a continuación, 
esta línea debe completarse correctamente. El código fuente de su programa se almacena 
en program.c, y su comando de compilación debería producir un programa ejecutable titulado.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int numInput;
    double sqrtResult;
    double eulerConstant;

    // Leer un número entero desde el teclado
    scanf("%d", &numInput);

    // Calcular la raíz cuadrada del número ingresado
    sqrtResult = sqrt(numInput);

    // Imprimir la raíz cuadrada con 8 decimales
    printf("%.8f\n", sqrtResult);

    // Calcular el valor de la constante de Euler usando exp(1)
    eulerConstant = exp(1.0);  // Aquí se usa exp(1.0)

    // Imprimir el valor de e con 10 decimales
    printf("%.10f\n", eulerConstant);

    // Imprimir el comando de compilación con el enlace a la biblioteca matemática
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program\n");

    return 0;
}
