/* ¡Todavía estás enseñando esa unidad sobre bibliotecas a tus alumnos! 
Esta vez desea demostrar cómo invocar la biblioteca JPEG (libjpeg.so), 
que puede usarse para leer y escribir archivos de imágenes en formato JPEG 
(siéntase libre de jugar aquí, ¡esto es bastante interesante!). 

Les pide a sus alumnos que escriban un programa con el código fuente almacenado en 
vizplus.c y que utilice la biblioteca JPEG. Para ayudar a sus alumnos, 
decide imprimirles el comando de compilación que crea un archivo ejecutable llamado 
vizplus desde vizplus.c junto con vincular la biblioteca JPEG durante el proceso de 
traducción. 

Escriba un programa que imprima el comando de compilación necesario con un 
simple printf(). Nuevamente, el código fuente de sus estudiantes se proporciona en vizplus.c.
 Sólo necesita vincular la biblioteca JPEG y generar un archivo ejecutable llamado vizplus.*/

 #include <stdio.h>
 int main(void)
 {
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra vizplus.c -ljpeg -o vizplus\n");
    return 0;
 }