////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                    UNIVERSIDADE FEDERAL DE MINAS GERAIS                    //
//                                                                            //
// Trabalho Prático 0 - Algoritmos e Estruturas de Dados III                  //
//                                                                            //
// Nome:        Caio Felipe Zanatelli                                         //
// Matrícula:   2016006310                                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include "ReversePolishNotation.h"
#include "SolveRPN.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAP_MAX	255

int main() {
	char mem[CAP_MAX] = "";
	char *expressaoEntrada = mem;
	int resultadoEsperado;
	
	scanf("%[^\n]%*c", expressaoEntrada);
	scanf("%d", &resultadoEsperado);

	RPNExpression expressaoRPN = getRPNExpression(expressaoEntrada);
	getAllSolutions(&expressaoRPN, resultadoEsperado);
	
	freeRPNExpression(&expressaoRPN);
	
	return 0;
}
