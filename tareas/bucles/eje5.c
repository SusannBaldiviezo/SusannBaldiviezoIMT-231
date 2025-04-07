#include <stdio.h>

int main() {
    char palabra[50];  
    int largo = 0;
    int i;
    
    printf("Ingrese una palabra: \n");
    scanf("%s", palabra);
    while(palabra[largo] != '\0') {
        largo++;
    }
    printf("Palabra invertida: \n ");
    for(i = largo - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }
    return 0;
}