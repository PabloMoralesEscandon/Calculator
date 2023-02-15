#include <stdio.h>
#include "cleaner.h"

void clean(){
    int c;
    while ((c= getchar())!= '\n' && c != EOF){
        ;
    }
}