//ejrcicio6
#include <stdio.h>
#include "funciones.h"

#define MSJ0 "Ingrese dos numeros"
#define MSJ1 "El primero es"
#define MSJ2 "El segundo es"

int main (void){
    int a;
    int b;
    while (1){
        printf(MSJ0);
        scanf("%d", &a);
        if(a==-1){
            printf("Fin");
            break;
        }
        printf(MSJ1);
        scanf("%d", &b);
        if(b==-1){
            printf("Fin");
            break;
        }
        int comparacion = comparar(a, b);
        switch(comparacion){
            case 1:
                printf("El primero es mayor\n");
                break;
            case -1:
                printf("El segundo es mayor\n");
                break;
            default:
                printf("El primero es igual al segundo\n");
        }
    }
}