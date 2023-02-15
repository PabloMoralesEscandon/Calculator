#include <stdio.h>
#include <stdlib.h>
#include "inputChecker.h"
#include "cleaner.h"

double check(void){
    int numero;
    int i;
    printf("Escriba el numero a operar: \n");
     do{
        i = scanf("%d", &numero);
        if ( i == 1){
            printf("Entrada correcta: %d\n", numero);
        }
         else{
            printf("Entrada no válida, por favor escriba un número: \n");
            clean();
         } 
     } while ( i != 1);
    return numero;
}