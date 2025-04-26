#include <stdio.h>
#include "funciones.h"

// Ejercicio 1
int parImpar(int numero1) {
    return numero1 % 2 == 0;
}

// Ejercicio 2
int numeroDigitos(int num1) {
    if (num1 == 0) return 1;
    int cont = 0;
    while (num1 != 0) {
        cont++;
        num1 /= 10;
    }
    return cont;
}

// Ejercicio 3
Semaforo cambiarSemaforo(Semaforo estado) {
    switch(estado) {
        case ROJO: return VERDE;
        case VERDE: return AMARILLO;
        case AMARILLO: return ROJO;
        default: return ROJO;
    }
}

// Ejercicio 5
int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }
int multiplicacion(int a, int b) { return a * b; }
float division(float a, float b) { return a / b; }

// Ejercicio 6
int comparar(int a, int b) {
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}


int esMultiploDe3(int numero) {
    if(numero % 3 == 0) {
        return 1;  // Sí es múltiplo de 3
    } else {
        return 0;  // No es múltiplo de 3
    }
}

// Ejercicio 8 (Mejorado)
int factorial(int num1) {
    if (num1 < 0) 
    return -1; 
    int resultado = 1;
    for (int i = 2; i <= num1; i++) {
        resultado *= i;
    }
    return resultado;
}

// Ejercicio 9 
int inverso(int num1) {
    if (num1 < 0) 
    return -1; 
    int invertido = 0;
    while (num1 > 0) {
        invertido = invertido * 10 + num1 % 10;
        num1 /= 10;
    }
    return invertido;
}