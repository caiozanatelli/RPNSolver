#include "Stack.h"
#include <stdlib.h>

void criarPilha(Stack *pilha) {
	pilha->pTopo = NULL;
	pilha->tamanho = 0;
}

void push(Stack *pilha, Item elemento) {
	Node *pNode = (Node*) malloc(sizeof(Node));
	pNode->elemento = elemento;
	pNode->pProximo = pilha->pTopo;
	pilha->pTopo = pNode;
	pilha->tamanho++;
}

Node* top(Stack *pilha) {
	return pilha->pTopo;
}

Node* pop(Stack *pilha) {
	if (isPilhaVazia(pilha)) {
		return NULL;
	}
	Node *pNodeRemovido = pilha->pTopo;
	pilha->pTopo = pNodeRemovido->pProximo;
	pilha->tamanho--;
	
	return pNodeRemovido;
}

int isPilhaVazia(Stack *pilha) {
	return (pilha->pTopo == NULL);
}

int getTamanho(Stack *pilha) {
	return pilha->tamanho;
}

void freePilha(Stack *pilha) {
	Node *pNodeAux;
	while ((pNodeAux = pop(pilha)) != NULL) {
		free(pNodeAux);
	}
}
