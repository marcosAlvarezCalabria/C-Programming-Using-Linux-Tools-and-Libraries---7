#include <stdio.h>
#include "suma.c"

int main(void)
{
    double a = 2.5;
    double aSquared = suma(a, 2);
    printf("%.3f", aSquared);

    return 0;

}