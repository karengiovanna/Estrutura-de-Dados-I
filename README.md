# Estrutura de Dados I

Repositório da disciplina de Estrutura de Dados I, ministrada pelo professor Filipe Dwan no semestre 2019.2

- O que é?
- Lista Ordenada
- Lista duplamente encadeada

Embora uma lista circularmente ligada tenha vantagens sobre uma lista linear, ela ainda apresenta várias deficiências. Não se pode atravessar uma lista desse tipo no sentido contrário nem um nó pode ser eliminado de uma lista circularmente ligada, em função de apenas um ponteiro para esse nó. Nos casos em que tais recursos são necessários, a estrutura de dados adequada é uma lista duplamente ligada.

Cada nó numa lista desse tipo
contém dois ponteiros, um para seu predecessor e outro para seu sucessor.
Na realidade, no contexto de listas duplamente ligadas, os termos predecessor e sucessor não fazem sentido porque a lista é totalmente simétrica. As listas duplamente ligadas podem ser lineares ou circulares e podem conter
ou não um nó de cabeçalho, conforme ilustrado na Figura
