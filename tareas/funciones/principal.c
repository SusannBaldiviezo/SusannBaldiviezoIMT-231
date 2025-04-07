#include <stdio.h>
#include "funciones.h"

#define  MENU "1.Para suma \n2. Para resta\n3. Para multiplicar\n4. Para dividir\n5.Salir\n"
#define MSJ1 "Ingrese el primer numero: "
#define MSJ2 "Ingrese el segundo numero: "

 int main (void){
    saludo ();
    int a=0;
    int b=0;
    int opcion=0;
    while(1){
        printf(MENU);
        scanf("%d", &opcion);
        if(opcion==1){
            printf(MSJ1);
            scanf("%d", &a);
            printf(MSJ2);
            scanf("%d", &b);

            int resultado=suma(a,b);
            printf("El resultado es : %d\n", resultado);
        }else if(opcion==2){
         printf(MSJ1);
         scanf("%d", &a);
         printf(MSJ2);
         scanf("%d", &b);
         int resultadoRest= resta (a,b);
         printf("El resultado es: %d\n", resultadoRest);
      }
      else if(opcion==3){
         printf(MSJ1);
         scanf("%d", &a);
         printf(MSJ2);
         scanf("%d", &b);
         int resultadoMult= multiplicar (a,b);
         printf("El resultado es: %d\n", resultadoMult);
      }
      else if(opcion==4){
         printf(MSJ1);
         scanf("%d", &a);
         printf(MSJ2);
         scanf("%d", &b);
         float resultadoDiv= dividir (a,b);
         printf("El resultado es: %f\n", resultadoDiv);
      }
      else if(opcion==5){
          break;
      }
   }
      return 0;
   }
