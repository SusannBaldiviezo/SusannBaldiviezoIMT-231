#include <stdio.h>
#include "funciones.h"

int main() {
    int num;
    
    printf("Cálculo de factorial (Ingrese negativo para terminar)\n");
    
    while(1) {
        printf("Ingrese un número: ");
        scanf("%d", &num);
        printf("El factorial de %d es: %d\n", num, factorial(num));
    }
    
    return 0;
}