# Estrutura de Dados I

Repositório da disciplina de Estrutura de Dados I, ministrada pelo professor Filipe Dwan no semestre 2019.2

### Tipo de dado: 
Define o conjunto de valores(domínio) que uma variável pode assumir.
> int = ...-2 , -1, 0, 1, 2...

### Estrutura de dados:
Trata-se de um relacionamento lógico entre tipos de dados.   
>typedef struct Professores Superior{
    char nome;
    int matricula;
    }
### Tipos Abstratos de Dados (TAD):
Incluem as operações para a manipulação dos dados. São funções para interagir com os seus dados que tem como vantagens o Capsulamento e a seguranca pois o usuário não tem acesso direto aos dados. Outra vantagem é a flexibilidade e a reutilização pois podemos alterar o TAD sem alterar as aplicações que o utilizam.
###
>- Criação da estrutura
>- Inclusão de um elemento
>- Remoção de um elemento
>- Acesso a um elemento
>- etc

Exemplo de um TAD: arquivos em C. FILE *f;  
Os dados f somente podem ser acessados pelas funções de manipulação do tipo: 
###
>- fopen()
>- fclose()
>- fputc()
>- fgetc()
>- feof()   

Nunca consegue acessar dentro do ponteiro pois os dados estão privados, porem pode manipular esse arquivo.   

A convenção na linguagem C é preparar dois arquivos para implementar um "TAD".   
###
>Arquivo.h : protótipo de funções, tipos de ponteiros, dados globalmente acessíveis.    
>Arquivo.c : declaração do tipo de dados e implementação das duas funções.    

Assim separamos o "conceito" (definição do tipo) de sua "implementação"
