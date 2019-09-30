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
