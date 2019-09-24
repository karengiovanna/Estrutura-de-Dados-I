#include <stdio.h>
#include "pilha.h"
#include <stdlib.h>

int main(){
    int valor;

    Pilha *p = cria_pilha();
    pop(p, 2);
    printf("%d", p->vet[p->topo]);
}
