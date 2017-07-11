#ifndef REVERSE_POLISH_NOTATION_H
#define REVERSE_POLISH_NOTATION_H

#define MAX_CAP_EXPRESSAO           255 // Tamanho máximo da expressão
#define MAX_CAP_ELEMENTO_EXPRESSAO  11	// Tamanho máximo de operador/operando (substring)
#define ID_OPERADOR                 -1	// Operador ("?") é representado por -1

// Estrutura que define um tipo para tratar a expressão RPN
typedef struct {
	int *elementos;
	int tamanho;
	int qtdOperadores;
} RPNExpression;


/*----------------------------------------------------------------------------------------
 Função:    transforma a expressão de entrada em um tipo mais simples para ser trabalhado.
 Entrada:   vetor de char que contém a expressão RPN informada pelo usuário.
 Saída:     retorna uma variável do tipo RPNExpression que contém a expressão tratada.
----------------------------------------------------------------------------------------*/
RPNExpression getRPNExpression(char *expressaoEntrada);


/*----------------------------------------------------------------------------------------
 Função:    libera a memória alocada para a expressão, feita pela função getRPNExpression.
 Entrada:   ponteiro para a expressão a ser liberada.
 Saída:     sem rotorno.
----------------------------------------------------------------------------------------*/
void freeRPNExpression(RPNExpression*);

#endif
