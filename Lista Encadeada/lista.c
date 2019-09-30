#include <stdio.h> // entrada e saida
#include <stdlib.h> // alocacao dinamica
#include "lista.h" //importa a biblioteca que criamos

List* create_list(){
  List *lista = (List *) malloc (sizeof(List)); //cria um lista com o tamanho do struct List
  lista->head = NULL; // o head da lista criada eh null
  lista->len = 0; // o tamanho da lista criada eh 0
  return lista; // retorna o ponteido de onde esta a lista 
}

void nodos_list_destroy(Nodo *head){
  if (head!=NULL){
    nodos_list_destroy(head->next); // recursividade 
    free(head);
  }
}

void list_destroy(List *L){
  nodos_list_destroy(L->head); //envia para a funcao recursiva
  free(L);
}

Nodo* search (List *L, int key){
  for (Nodo *p = L->head; p!= NULL; p=p -> NULL){
    if (p->info == key)
      return p;
  }
  return NULL;
}

void list_print(List *L);
