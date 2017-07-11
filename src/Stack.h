#ifndef STACK_H
#define STACK_H

#include "Node.h"

// Estrutura que define o tipo Pilha (Stack)
typedef struct {
	Node *pTopo;
	int tamanho;
} Stack;


/*--------------------------------------------------------------------------------
 Função:    cria uma pilha vazia.
 Entrada:   ponteiro para a pilha a ser criada.
 Saída:     sem rotorno.
--------------------------------------------------------------------------------*/
void criarPilha(Stack *pilha);


/*--------------------------------------------------------------------------------
 Função:    remove todos os nós da pilha, liberando toda memória por ela utilizada.
 Entrada:   ponteiro para a pilha a ser liberada.
 Saída:     sem rotorno.
--------------------------------------------------------------------------------*/
void freePilha(Stack *pilha);


/*--------------------------------------------------------------------------------
 Função:    insere um elemento na pilha.
 Entrada:   ponteiro para a pilha utilizada na operação e o item a ser inserido.
 Saída:     sem rotorno.
--------------------------------------------------------------------------------*/
void push(Stack *pilha, Item item);


/*--------------------------------------------------------------------------------
 Função:    remove um elemento da pilha.
 Entrada:   ponteiro para a pilha que será utilizada na operação.
 Saída:     ponteiro para o nodo removido.
--------------------------------------------------------------------------------*/
Node* pop(Stack *pilha);


/*--------------------------------------------------------------------------------
 Função:    obtém o topo da pilha, mas sem modificá-lo/removê-lo.
 Entrada:   ponteiro para a pilha que será utilizada na operação.
 Saída:     ponteiro para o nodo que ocupa o topo da pilha.
--------------------------------------------------------------------------------*/
Node* top(Stack *pilha);


/*--------------------------------------------------------------------------------
 Função:    verifica se a pilha está vazia.
 Entrada:   ponteiro para a pilha a ser testada.
 Saída:     retorna 1 se a pilha estiver vazia e 0 caso contrário.
--------------------------------------------------------------------------------*/
int isPilhaVazia(Stack *pilha);


/*--------------------------------------------------------------------------------
 Função:    obtém o tamanho atual da pilha.
 Entrada:   ponteiro para a pilha a ser verificada.
 Saída:     retorna o tamanho atual da pilha.
--------------------------------------------------------------------------------*/
int getTamanho(Stack *pilha);

#endif

