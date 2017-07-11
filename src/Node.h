#ifndef NODE_H
#define NODE_H

typedef int Item;

// Estrutura que representa um nó/célula da pilha
typedef struct Node {
	Item elemento;
	struct Node *pProximo;
} Node;

#endif


