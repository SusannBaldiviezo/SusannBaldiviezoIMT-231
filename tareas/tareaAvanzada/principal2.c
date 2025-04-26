#include <stdio.h>
#include "funciones.h"

#define MSJ1 "Ingrese un numero entero positivo (0 para salir)"
#define MSJ2 "El programa acabo"


int main (void){
    int n;
    while(1){
        printf(MSJ1);
        scanf("%d", &n);
        if(n==0){
            printf(MSJ2);
            break;
        }
        int digitos = numeroDigitos(n);
        printf("El numero %d tiene %d digitos\n", n, digitos);
    }
    return 0;
}