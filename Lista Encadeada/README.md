#### Linked list ou lista encadeada    

É um tipo de estrutura de dados que contém um grupo de nos interligados através de ponteiros, onde o ponteiro dentro da estrutura aponta para o próximo nó até que o ponteiro seja NULL indicando assim o fim da lista.

O início aponta para um ponteiro que inicia a estrutura ou o primeiro nó da lista e no final o ponteiro aponta para um Null indicando o fim da lista.
Estrutura de dados na linguagem C e um tema muito abrangente e tem muitos tópicos mas aqui vamos usar como referência uma estrutura bem simples pra facilitar o entendimento e a execução do exemplo.

A estrutura que vamos criar seria assim:   
>struct *node   
>{   
>   int numero;   
>   struct node *pLink;   
>}   

E para criar o link entre os nós vamos usar o seguinte código.   
> struct node *p = (struct node*) malloc(sizeof(struct node*));  

Malloc vai alocar uma porção da memória para receber a nossa lista, após criarmos a lista vamos atualizar o pLink com a posição de cada elemento novo que criarmos.
A implementação completa do código de exemplo segue abaixo.

Fonte: https://medium.com/aprendacpp/criando-uma-lista-encadeada-em-c-17e7f5692f36
