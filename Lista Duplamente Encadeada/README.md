Sabe o endereço do próximo e do anterior.   
Um ponteiro apontará para o início da lista e outro ara o finalm deste modo o usuário poderá decidir, se não tivesse teria que percorrer a lista inteira para inserir no final.   
Desvantagem: Ponteiro ocupa 4 bits e endereço também, ou seja, precisará de 12 bits.   

typedef struct nodo{   
  int info;   
  struct nodo * next;    
  struct nodo * prev;   
}Node;

typedef struct list{      
  int len;   
  Node *start;   
  Node *last;   
} DoublyList;   

create, list insert begin e list insert end são as unicas duas funções diferentes   
