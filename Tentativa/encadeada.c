#include <stdio.h>
#include <stdlib.h>
#include "encadeada.h"

Lista *criar_lista(){
    Lista * L = (Lista*) malloc (sizeof(Lista));
    L-> head = NULL;
    L-> len = 0;
    return L; 
}

int esta_vazia(Lista *L){
    if (L->head == NULL)
        return 1;
    else
        return 0;
}

void inserir_nodo(Lista *L, int valor){
    Nodo *new = (Nodo*) malloc (sizeof(Nodo));
    new->info = valor;
    L-> len++;
    if (esta_vazia(L)==1){
        L-> head = new;
        new->next = NULL; 
    }
    else{
        new-> next = L->head;
        L->head = new; 
    }
}

void pesquisar(Lista * L, int key){
    for (Nodo *p = L->head; p!=NULL; p=p->next){
        if (key == p)
            return *p; 
    }
}