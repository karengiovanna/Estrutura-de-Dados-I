#include <stdio.h> // entrada e saida
#include <stdlib.h> // alocacao dinamica
#include "lista.h" //importa a biblioteca que criamos

Lista * criar_lista(){
  Lista *lista = (Lista *) malloc (sizeof(Lista)); //cria um lista com o tamanho do struct List
  lista->head = NULL; // o head da lista criada eh null
  lista->len = 0; // o tamanho da lista criada eh 0
  return lista; // retorna o ponteido de onde esta a lista 
}

void inserir_lista(Lista *L, int v){
  Nodo *new = (Nodo*) malloc(sizeof(Nodo)); // cria um novo nodo
  L->len++; // aumenta o tamanho da lista
  new->info = v; //o valor será inserido no novo nodo
  new->next = L->head;
  L->head = new; //novo nodos sempre são inseridos no começo da lista
}

int esta_vazia(Lista *L){
  return (L->head == NULL);
}

/*
* list_destroy_iterativo não estará visível para o usuário
porque não adicionamos o cabeçalho dela no list.h
*/
void list_destroy_interativo(Lista *L){
  Nodo *comeco, *anterior;
  comeco = L-> head;
  while (comeco != NULL){
    anterior = comeco;
    comeco = comeco -> next;
    free(anterior);
  } 
  free(L);
}

/*
* Nodos list Destroy nao estará visível para
o usuário porque não adicionamos o cabeçalho
dela no list.h
*/
void nodos_list_destroy(Nodo *head){
  if (head!=NULL){
    nodos_list_destroy(head->next); // recursividade 
    free(head);
  }
}

void list_destroy(Lista *L){
  nodos_list_destroy(L->head); //envia para a funcao recursiva
  free(L);
}

Nodo* procurar (Lista *L, int key){
  for (Nodo *p = L->head; p!= NULL; p=p -> NULL){
    if (p->info == key)
      return p;
  }
  return NULL;
}

/*
* search_nodo não estará visível para o usuário
porque não adicionamos o cabeçalho dela no list.h
*/
Nodo * procurar_nodo(Nodo* head, int key);

Nodo *search_nodo(Nodo *head){
  if (head == NULL) //verifica se é nulo, se for, nao achei
      return head;
  if (head->info==key) //verifica se a informação esta aqui
    return head;
  search_nodo(head->next,key); //se nao for o primeiro elemento da lista procura nas seguintes
}

Nodo *search_recursivo(List *L, int key){
  return search_nodo(L->head, key);
}


void list_print(Lista *L){
  for (Nodo *posicao = L-> head; posicao!= NULL;posicao=posicao->next){
    printf("%d", posicao-> info);
  }
  printf("\n");
}

void list_remove(Lista *L, int v){
  
}