#include <stdio.h>
#include "funciones.h"
void saludo(void){
    printf("Hola desde una fucion \n");
}
int suma(int numero1,int numero2){
    int respuesta= numero1+numero2;
    return respuesta;
}

int resta(int numero1, int numero2){
    int respuestaRest =numero1 - numero2;
    return respuestaRest;
}
int multiplicar(int numero1, int numero2){
    int respuestaMult = numero1 * numero2;
    return respuestaMult;
}

float dividir(float numero1, float numero2){
    float respuestaDiv = numero1 / numero2;
    return respuestaDiv;
}
