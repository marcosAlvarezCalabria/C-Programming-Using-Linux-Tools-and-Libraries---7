#include <stdio.h>

int main ()
{
    int N;
    int i = 0;
    int number;
    float sum = 0;
    FILE *iFile;

    iFile = fopen("my_first_file.txt", "r");

    fscanf(iFile, "%d", &N); 
   

    //printf("El valor leído es: %d\n", N);

    while (i < N)
    {
        fscanf(iFile, "%d", &number);
        //printf("El valor leído es: %d\n", number);
        sum = sum + number;
        i++;
    } 
    printf("%.2f\n", sum/N);

    fclose(iFile);
 return 0;   
}