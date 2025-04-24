#include <stdio.h>
#include "funciones.h"
//verificar si un numero es primo
int esPrimo(int n){
    if (n<0){
        return 1;
    }
    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
//factorial
int factorial (int num1){
    if (num1<0){
        return 1;
    }
    int fact=1;
    while (num1>0){
        fact= fact*num1;
        num1 = num1-1;
    }
    return fact;
}
//Contar números pares e impares entre 1 y N
int contarPar(int n){
    int i;
    int par=0;
    int impar=0;
    if (n<0){
        return 1;
    }
    for(i=1; i<=n; i++){
        if(i%2==0){
            par++;
        }
        else{
            impar++;
        }
    }
    //se puede imprimr desde aqui o en el main
    printf("Números pares: %d\n", par);
    printf("Números impares: %d\n", impar);
    return 0;
}
//Mostrar múltiplos de 3 entre 1 y N
int contadormul3 (int n){
    if (n<0){
        return 1;
    }
    int i;
    int cont=0;
    for(i=1; i<=n; i++){
        if(i%3==0){
            cont++;
        }
    }
    return cont;
}
