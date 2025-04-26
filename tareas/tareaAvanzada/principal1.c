#include <stdio.h>
#include "funciones.h"

#define MSJ1 "Ingrese el varios numeros : "
#define MSJ2 "Ingrese un numero "


int main (void){
    int a;
    while (1){
        printf(MSJ1);
        scanf("%d", &a);
        if(a==-1){
            printf("Fin");
            break;
        }
        if (parImpar(a)){
            printf("El numero %d es par\n", a);
        }else{ 
                printf("El numero %d es impar\n", a);
            }
        }
        return 0;

    }




