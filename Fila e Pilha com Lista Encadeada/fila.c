#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila * criar_fila(Fila *f){
    Fila *f = (Fila * )malloc(sizeof(Fila));
    f-> comeco = f->final = NULL;
    f->len = 0;
    return f;
}

void destrurir_fila(Fila *f){
    Nodo *anterior, *inicio;
    inicio = f->comeco;
    while (inicio=!NULL){
        anterior = inicio;
        inicio = inicio->next;
        free(anterior);
    } 
    free(f);
}

