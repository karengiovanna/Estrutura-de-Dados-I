#ifndef _FILA_H_
#define _FILA_H_

typedef struct nodo{
    int info;
    struct nodo *next;
} Nodo;

typedef struct fila{
    Nodo * comeco;
    Nodo * final;
    int len;
} Fila;

Fila * criar_fila();
void destruit_fila(Fila *f);
void imprimir_fila(Fila *f);
void esta_vazia(Fila *f, int v);
int desenfilar(Fila *f, int *v);


#endif