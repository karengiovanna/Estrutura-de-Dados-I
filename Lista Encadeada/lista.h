#ifndef _LISTA_H_ 
#define _LISTA_H_

typedef struct nodo{
  int info;
  struct nodo *next;
}Nodo;

typedef struct list{
  Nodo *head;
  int len;
} List;
