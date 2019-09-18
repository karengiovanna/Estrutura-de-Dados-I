#include <stdio.h>
#include "fila_prioridades.h"

void heap_extract_maximum(Heap *f){
  if (f->heap_size < 1) // se houver menos de um elemento da lista
      return -1; // codigo perigosso: deveria ter sido lançado um erro, uma exceção
  // troca o elemento da primeira posicao com o da ultima:
  int max = f->VET[0]; // max vai receber o elemento da primeira posicao do vetor
  f->VET[0] = f->VET[f->heap_size-1]; // até a ultima quantidade de elementos menos 1
  // decrementa a quantidade de locais pois retioru o ultimo elemento (que antes estava em primeiro):
  f->heap_size--; // decrementa a quantidade de locais pois retioru o ultimo elemento (que antes estava em primeiro)
  //f->heap_size = f->heap_size-1;
  maximum_heapfy(f,0);
}

int help_increase_key(Heap *f, int pos, int key){
  //nao pode ser uma prioridade menor do que a que esta lá
  //erro
  
}
