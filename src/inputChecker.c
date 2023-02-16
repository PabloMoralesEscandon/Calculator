#include <stdio.h>
#include <stdlib.h>
#include "inputChecker.h"
#include "cleaner.h"

double check(void){
    double numero;
    int i;
    printf("Escriba el numero a operar: ");
     do{
        i = scanf("%lf", &numero);
        if ( i == 1){
            printf("\nEntrada correcta: %lf\n", numero);
        }
         else{
            printf("\nEntrada no válida, por favor escriba un número: ");
            clean();
         } 
     } while ( i != 1);
    return numero;
}