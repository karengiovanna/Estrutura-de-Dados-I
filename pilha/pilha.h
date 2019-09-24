#ifndef _PILHA_H_
#define _PILHA_H_

#define MAX 100

typedef struct pilha{ // pilha pode ser declarada como uma estrutura  contendo dois objetos
    int topo = -1; // um inteiro para identificar a posição atual do topo
    int vet[MAX]; //um vetor para armazenar os elementos da pilha
} Pilha;

int pop(Pilha *p);
void push(Pilha *p, int topo);
int is_empty(Pilha *p);
int get_size(Pilha *p);
#endif // _PILHA_H_
