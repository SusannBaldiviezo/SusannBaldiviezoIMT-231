#include <stdio.h>
int main(){
    int e;
    printf("Ingrese su edad:    ");
    scanf("%d",&e);
    if (e<13){
        printf("Es infante");
        }else if (e>=13 && e<18){
            printf("Es niño");
            }else {
                printf("Es adulto");
                }
    return 0;
    }
