O trabalho consiste em implementar uma versão simplificada de um índice invertido utilizado em motores de busca. 

* #### Entrada:     
> Um arquivo no formato .txt, contendo várias strings em várias linhas. (exemplo: um arquivo com frases, cada uma em uma linha diferente)    

* #### Descrição de funcionamento:    
> O algoritmo implementado deve varrer o texto e criar um vetor contendo a lista de palavras (sem repetições) encontradas no arquivo inteiro (esse é o chamado dicionário). Cada palavra do dicionário deve apontar para uma lista encadeada. Cada nó da lista encadeada deve possuir as informações sobre a linha e a quantidade de vezes que a palavra apareceu nesta linha. Se a palavra do dicionário aparecer em mais de uma linha, a lista encadeada deve apresentar um nó para cada uma dessas linhas.     

* #### Saída do Programa:    
> O programa deve imprimir no terminal a lista invertida criada a partir do arquivo texto dado como entrada, no seguinte formato:    
> Palavra1 : (X,Y), (X,Y)...    
> Palavra2 : (X,Y), (X,Y)    
> Onde X e Y são o numero da linha e a quantidade de vezes que a palavra apareceu na linha indicada, respectivamente. 


### PASSO A PASSO PARA A REALIZAÇÃO DO CÓDIGO
1. Receber um arquivo no formato .txt    
> A função básica par abrir um arquivo é fopen (FILE * fopen (char * nome_aarquivo, char* modo);). Quando abrimos um arquivo, a função temm como valor de retorno um ponteiro para o tipo file e todas as operações subsequentes nesse arquivo receberão esse endereço como parametro de entrada.    
2. Varrer o texto
> Para isso utilizaremos o modo r (read) na hora de abrir o arquivo e usaremos um if para verificar quando há espaço em branco, ou seja quando uma palavra acaba e outra se inicia.
