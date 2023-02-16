#include <stdio.h>
#include "inputChecker.h"

int main() {

char operacion;
double primerOperando, segundoOperando;

while(1){
    while(1) {
        
        primerOperando = check();

        segundoOperando = check();

        clean();

        while (1){
            printf("Elige la operación ( +, -, *, /):");
            scanf("%c", &operacion);

            switch (operacion){
                case '+':
                    printf("%lf + %lf = %lf\n", primerOperando, segundoOperando, primerOperando + segundoOperando);
                    goto EndWhile;
                case '-':
                    printf("%lf - %lf = %lf\n", primerOperando, segundoOperando, primerOperando - segundoOperando);
                    goto EndWhile;
                case '*':
                    printf("%lf * %lf = %lf\n", primerOperando, segundoOperando, primerOperando * segundoOperando);
                    goto EndWhile;
                case '/':
                    printf("%lf / %lf = %lf\n", primerOperando, segundoOperando, primerOperando / segundoOperando);
                    goto EndWhile;
                default:
                    printf("Operador no válido.\n");
                    clean();
                    continue;
            }
        }
        EndWhile: ;
    }
}
}
