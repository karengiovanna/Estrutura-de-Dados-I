#include <stdio.h>
#include <stdlib.h> // alocacao dinamica
#include "pilha.h"

Pilha *cria_pilha(){
    Pilha *p;
    p = malloc(sizeof(Pilha))
    p->topo = -1;
    return p;
}

void libera_pilha(Pilha *p){
    free(p);
}

int esta_vazia(Pilha *s){
    if (s->topo == -1)
        return 1;
    else
        return 0;
}

void push(Pilha *s, int valor){
    if (esta_vazia(s)== 1)
        printf("Nao pode remover o topo pois a pilha está vazia");
    else
        s->vet[s->topo++] = valor;
}


int pop(Pilha *p, int removido){
    if(esta_vazia(p) == 1)
        return 0;
    else
        *valor = p->vet[p->topo--];
        return 1;
}

int get_tamanho(Pilha *p){
    return p->topo;
}
