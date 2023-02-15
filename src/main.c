#include <stdio.h>
#include "inputChecker.h"

int main() {

char operacion;
int primerOperando, segundoOperando;

while(1) {
    
    primerOperando = check();

    segundoOperando = check();

    clean();

    while (1){
        printf("Elige la operación ( +, -, *, /):");
        scanf("%c", &operacion);

        switch (operacion){
            case '+':
                printf("%ld + %ld = %ld\n", primerOperando, segundoOperando, primerOperando + segundoOperando);
                return;
            case '-':
                printf("%ld - %ld = %ld\n", primerOperando, segundoOperando, primerOperando - segundoOperando);
                return;
            case '*':
                printf("%ld * %ld = %ld\n", primerOperando, segundoOperando, primerOperando * segundoOperando);
                return;
            case '/':
                printf("%ld / %ld = %ld\n", primerOperando, segundoOperando, primerOperando / segundoOperando);
                return;
            default:
                printf("Operador no válido");
                clean();
                continue;
        }
    }
}

}
