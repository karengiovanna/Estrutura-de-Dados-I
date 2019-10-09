#include <stdio.h>   
#include <stdlib.h>   


list_insert{   
  Node *ant   
  ant = NULL; //no comeco não há anterior   
  
  Node *new = (Node *) malloc(sizeof)//se for inserir tem que criar o elemento   
  new -> info = v;// informacao tem que ser contextualizada   
  L->len++; //lista aumenta    
  
  while (p!= NULL && p-> info->v){   
    ant = p;  //tem que salvar para depois mudar o p   
    p = p-> next;   
  }   
  
  if (ant == NULL){   
  // eventualmente pode ocorrer de inserir no início
  L -> head = new;
  }
