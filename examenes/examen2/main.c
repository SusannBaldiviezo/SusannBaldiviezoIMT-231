#include <stdio.h>
#include "funciones.h"
#define MENU "\n MENÙ DE OPERACIONES \n"
#define MSJ0 " \n SELECCIONE UNA OPCION \n 1. Verificar si un número es primo \n2. Calcular el factorial de un número\n3. Contar números pares e impares entre 1 y N\n4. Mostrar múltiplos de 3 entre 1 y N.\n5.Salir\n"
#define MSJ01 "Ingrese un numero entero positivo: "
#define MSJ1 "Ingrese el valor de n "


int main (void){
    int a;
    int b;
    int operacion;
    while (1){
        printf(MENU);
        printf(MSJ0);
        scanf("%d", &operacion);  
        int bandera =1;
        if(operacion==5){
            printf("El programa se ha cerrado");
            break;
        }
        switch(operacion){
            case 1:
                printf(MSJ01);
                scanf("%d", &a);
                if(esPrimo(a)){
                    printf("El número %d es primo", a);
                }
                else{
                    printf("El número %d no es primo", a);
                }
                break;
            case 2:
                printf(MSJ01);
                scanf("%d", &a);
                int fact = factorial(a);
                printf("El factorial de %d es %d\n", a, fact);
                break;
            case 3:
                printf(MSJ1);
                scanf("%d", &a);
                contarPar(a);
                int par = contarPar(a);
                int impar = contarPar(a);
                printf("Números pares: %d\n", par);
                printf("Números impares: %d\n", impar);
                break;
            case 4:
                printf(MSJ1);
                scanf("%d", &a);
                contadormul3(a);
                int mult3 = contadormul3(a);
                printf("Números múltiplos de 3: %d\n", mult3);
                break;
        }
    }
    return 0;
}