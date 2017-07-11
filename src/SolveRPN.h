#ifndef SOLVE_RPN_H
#define SOLVE_RPN_H

#include "ReversePolishNotation.h"
#include "Stack.h"

/*---------------------------------------------------------------------------------
 Função:    Função acessada pelo usuário para avaliar  uma expressão em notação
            polonesa reversa. Para isso, a função recursiva solveRPN é chamada.
 Entrada:   ponteiro para a expressão a ser avaliada e o resultado esperado.
 Saída:     sem rotorno.
---------------------------------------------------------------------------------*/
void getAllSolutions(RPNExpression *expressaoRPN, int resultadoEsperado);


/*---------------------------------------------------------------------------------
 Função:    lista todas as possibilidades de sequências de operadores de forma  que
            o  resultado  da expressão RPN seja o  resultado esperado. Isso é feito
            através de chamadas recursivas.
 Entrada:   a  expressão a ser avaliada; o  índice da  expressão, para controlar  a 
            recursão; o  resultado  esperado; o  vetor de  sequência de  operadores
            que será atualizado a cada análise; o índice da sequência de operadores
            e  a pilha que será  utilizada para o  processamento da expressão  RPN.
 Saída:     sem rotorno.
----------------------------------------------------------------------------------*/
void solveRPN(RPNExpression *expressao, int index, int res, char *operadores, int indexOp, Stack *pilha);

#endif

