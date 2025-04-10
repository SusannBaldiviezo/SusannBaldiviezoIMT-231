#include <stdio.h>
int main(void){
int num, cont=0;
printf("Ingrese un numero entero positivo: \n");
scanf("%d", &num);
    while (num>0){

    num=num/10;
    cont++;
    }
    printf("El numero de digitos es: %d \n", cont);
    return 0;
}


