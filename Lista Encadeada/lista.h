#ifndef _LISTA_H_ 
#define _LISTA_H_

typedef struct nodo{
  int info;
  struct nodo *next;
}Nodo; 

typedef struct lista{
  Nodo *head;
  int len;
} Lista;

Lista * criar_lista();
void inserir_lista(Lista*, int v);
int esta_vazia(Lista *L);
void destruir_lista(Lista *L);
Nodo* procurar_nodo(Lista *L, int chave);
void imprimir_lista(Lista *L);
void remover_lista(Lista *L, int v);

#endif
