#ifndef _ORDERED_LIST_H_
#define _ORDERED_LIST_H_

typedef struct lista{    
    int info;   
    struct lista *next;      
} Node; // nao da pra colocar len pois ficaria associado ao nodo e nao à lista  

typedef struct list{
  Node *head;
  int len;
} List;


List * create_list();
void list_insert(Lista* L, int *v); //a unica coisa que vai mudar em uma lista ordenada, o resto é lista encadeada
int
void
Node*
void
void

#endif
