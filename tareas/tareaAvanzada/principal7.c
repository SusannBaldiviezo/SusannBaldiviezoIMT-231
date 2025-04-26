#include <stdio.h>
#include "funciones.h"
int main() {
    int numero, contador = 0;
    printf("CONTADOR DE MULTIPLOS DE 3\n");
    printf("Ingrese numeros (0 para terminar):\n");
    while(1) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        if(numero == 0) {
            break;  
        }
        if(esMultiploDe3(numero) == 1) {
            contador = contador + 1;  // Aumenta el contador
        }
    }
    printf("Se ingresaron %d multiplos de 3\n", contador);
    return 0;
}