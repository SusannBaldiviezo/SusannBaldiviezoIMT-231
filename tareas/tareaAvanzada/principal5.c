#include <stdio.h>
#include "funciones.h"

#define MSJ0 "1.Para suma \n2. Para resta\n3. Para multiplicar\n4. Para dividir\n5.Salir\n"
#define MSJ1 "Ingrese el primero numero "
#define MSJ2 "Ingrese el segundo numero "

int main (void){
    int a;
    int b;
    int operacion;
    while (1){
        printf(MSJ0);
        scanf("%d", &operacion);
        if(operacion==-1){
            printf("Fin");
            break;
        }
        printf(MSJ1);
        scanf("%d", &a);
        if(a==-1){
            printf("Fin");
            break;
        }
        printf(MSJ2);
        scanf("%d", &b);
        if(b==-1){
            printf("Fin");
            break;
        }
        switch(operacion){
            case 1:
                printf("La suma es %d\n", suma(a, b));
                break;
            case 2:
                printf("La resta es %d\n", resta(a, b));
                break;
            case 3:
                printf("La multiplicacion es %d\n", multiplicacion(a, b));
                break;
            case 4:
                printf("La división es %f\n", division(a, b));
                break;
            default:
                printf("Operación no reconocida\n");
            case 5:
                printf("Fin");
                break;
        }
    }
    return 0;
}