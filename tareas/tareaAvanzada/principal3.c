#include <stdio.h>
#include "funciones.h"

int main() {
    Semaforo estado = ROJO;
    const int CICLOS_MAXIMOS = 10;
    for (int i = 0; i < CICLOS_MAXIMOS; i++) {
        switch(estado) {
            case ROJO:
                printf("SEMAFORO EN ROJO - Detente\n");
                break;
            case VERDE:
                printf("SEMAFORO EN VERDE - Avanza\n");
                break;
            case AMARILLO:
                printf("SEMAFORO EN AMARILLO - Precaución\n");
                break;
        }
        estado = cambiarSemaforo(estado);
    }

    return 0;
}