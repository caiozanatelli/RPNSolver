tp0: ReversePolishNotation.o Stack.o SolveRPN.o tp0.o
	gcc -Wall -Wextra -Werror -std=c99 -pedantic -g ReversePolishNotation.o Stack.o SolveRPN.o tp0.o -o tp0
tp0.o: tp0.c ReversePolishNotation.h Stack.h Node.h
	gcc -Wall -Wextra -Werror -std=c99 -pedantic -g -c tp0.c
ReversePolishNotation.o: ReversePolishNotation.h ReversePolishNotation.c
	gcc -Wall -Wextra -Werror -std=c99 -pedantic -g -c ReversePolishNotation.c 
Stack.o: Stack.h Stack.c
	gcc -Wall -Wextra -Werror -std=c99 -pedantic -g -c Stack.c
SolveRPN.o: SolveRPN.h SolveRPN.c
	gcc -Wall -Wextra -Werror -std=c99 -pedantic -g -c SolveRPN.c
clean:
	rm *.o *.gch
	rm ReversePolishNotation
	rm Stack
	rm SolveRPN
	
