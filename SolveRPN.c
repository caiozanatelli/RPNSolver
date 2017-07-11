#include "SolveRPN.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getAllSolutions(RPNExpression *expressaoRPN, int resultadoEsperado) {
	Stack pilha;
	criarPilha(&pilha);
	int qtdOperadores = expressaoRPN->qtdOperadores;
	
	char *operadores = (char*) calloc(qtdOperadores + 1, sizeof(char));
	operadores[qtdOperadores] = '\0';
	
	// Chama a função recursiva para avaliar a expressão RPN
	solveRPN(expressaoRPN, 0, resultadoEsperado, operadores, 0, &pilha);
	
	free(operadores);
	freePilha(&pilha);
}

void solveRPN(RPNExpression *expressao, int index, int res, char *operadores, int indexOp, Stack *pilha) {
	Node *pTopoPilha = top(pilha);
	
	// A avaliação da expressão chegou ao fim. Se o resultado for o esperado,
	// a sequência de operadores é impressa.
	if (index == expressao->tamanho) {
		if (pTopoPilha && pTopoPilha->elemento == res) {
			printf("%s\n", operadores);
		}
		
		return;
	}
	
	// Operando identificado na expressão. Insere na pilha e invoca a função recursivamente
	if (expressao->elementos[index] != ID_OPERADOR) {
		push(pilha, expressao->elementos[index]);
		solveRPN(expressao, index + 1, res, operadores, indexOp, pilha);

		// Remove alteração feita recursivamente para retomar o estado da pilha
		free(pop(pilha));
		
		return;
	}
	
	// O elemento da expressão atual é um operador
	if (pTopoPilha && pTopoPilha->elemento <= res) {
		Node *pValorA = pop(pilha);
		Node *pValorB = pop(pilha);

		int valorA = pValorA->elemento;
		int valorB = pValorB->elemento;		
		
		free(pValorA);
		free(pValorB);

		// Chama a função recursivamente para a soma
		operadores[indexOp] = '+';
		push(pilha, valorA + valorB);
		solveRPN(expressao, index + 1, res, operadores, indexOp + 1, pilha);	
		free(pop(pilha));

		// Chama a função recursivamente para a multiplicação
		operadores[indexOp] = '*';
		push(pilha, valorA * valorB);
		solveRPN(expressao, index + 1, res, operadores, indexOp + 1, pilha);
		free(pop(pilha));
			
		// Faz com que a pilha volte ao estado original
		push(pilha, valorB);
		push(pilha, valorA);
	}		
}
