

#include <stdio.h>
#include <stdlib.h>
#include "doubly_linked_list.h"

DoublyList* create_list(){   
   DoublyList *L = (DoublyList *) malloc (sizeof(DoublyList));
   L->start = L->last = NULL;
   L-> len = 0;
}

int list_insert_begin(DoublyList *L, int v){
   Node *new = (Node *) malloc(sizeof(Node));
   if (new!= NULL){ // 
      new->info = v;
      if (is_empty(L)) //se a lista estiver vazia
         L->last=new;
      else // se nao estiver vazia
         L->start->prev = new; //link new nodo backward
      /* 
        * As the new node is inserted at the beggening of the list,
        * then its prev will be NULL and it will be the head of the list.
        * In addition, we need to link the new node with the list.
        * To do so, we make the 'next' fild of the new node points to 
        * the head of the list.
        */
      new->next = L->start; //link new node forward
      new->prev = NULL;
      L->start = mew;
      L->len++;
      return 1;
   }
   return 0;
}

int list_insert_end(DoublyList *L, int v){
   if (is empty(L)) // verifica se esta vazia 
      return list_insert_begin(L,v);
   Node *new = (Node *) malloc(sizeof(Node));
   
   
   
   Node *new
   if new == NULL 
      return 0;
new->info = v
new->next = new

Node *search (DoublyList *L, int key) //buscar o elemento key na lista encadeada
   Node* aux
   for (Node *aux = L->start; aux!=NULL; aux=aux->next)
      if (aux->info == key) //info é inteiro e é igual aoelemento buscado
         return aux;
