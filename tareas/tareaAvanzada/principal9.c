#include <stdio.h>
#include "funciones.h"

int main() {
    int num;
    printf("Inversor de números (Ingrese número de un dígito para terminar)\n");
    while(1) {
        printf("Ingrese un número positivo: ");
        scanf("%d", &num);
        if(num >= 0 && num < 10) 
        break;
        printf("El número invertido es: %d\n", inverso(num));
    }
    return 0;
}

