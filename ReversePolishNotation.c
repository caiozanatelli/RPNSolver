#include "ReversePolishNotation.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

RPNExpression getRPNExpression(char *expressaoEntrada) {
	RPNExpression expressaoRPN;
	expressaoRPN.elementos = (int*) calloc(MAX_CAP_EXPRESSAO, sizeof(int));
	
	char elementoExpressao[MAX_CAP_ELEMENTO_EXPRESSAO];
	int i = 0, qtdOperadores = 0;
	int operando;
	
	// Percorre cada substring da entrada. Se for um operador, armazena - 1 no 
	// vetor de elementos da expressão, senão lê o operando e o armazena 
	while (sscanf(expressaoEntrada, "%s", elementoExpressao) == 1) {
	
		// Movimenta o ponteiro para ler a próxima substring
		expressaoEntrada = &expressaoEntrada[strlen(elementoExpressao) + 1];
		
		if (elementoExpressao[0] == '?') {
			expressaoRPN.elementos[i++] = ID_OPERADOR;
			qtdOperadores++;
		}
		else {
			sscanf(elementoExpressao, "%d", &operando);
			expressaoRPN.elementos[i++] = operando;
		}
	}
	
	expressaoRPN.tamanho = i;
	expressaoRPN.qtdOperadores = qtdOperadores;
	
	return expressaoRPN;
}

void freeRPNExpression(RPNExpression *expressaoRPN) {
	free(expressaoRPN->elementos);
}
