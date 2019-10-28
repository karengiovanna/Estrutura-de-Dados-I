#ifndef _ENCADEADA_H_
#define _ENCADEADA_H_

typedef struct nodo{
    int info;
    struct nodo *next;
} Nodo;

typedef struct lista{
    Nodo *head;
    int len;
} Lista;

Lista * criar_lista();
Nodo *procurar(Lista *L, int v);
void deletar(Lista *L, int v);
void insert_nodo(Lista *L, int v);
int esta_vazia (Lista *L);


#endif 
