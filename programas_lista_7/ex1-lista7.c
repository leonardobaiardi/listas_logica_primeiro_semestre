/*
LISTA 07 - EXERC�CIO 1

ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: SP3070751
PER�ODO: NOTURNO

1) Codifique o programa em linguagem C com uma fun��o que receba 
um n�mero inteiro e positivo N como par�metro e retorne a soma 
dos n�meros inteiros existentes entre 1 e N (inclusive).
*/

/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Vari�veis globais */
int num, cont, soma;

/* Prot�tipos de fun��es */
int somaInt();
int main();

/* Constru��o das fun��es */
int somaInt() 
{		
	for(cont=0 ; cont<=num ; cont++) {
		soma = soma+cont;
		}
		return (soma);
}

/* Corpo do programa */
int main()
{
	setlocale(LC_ALL, "");
	printf("\n Insira um valor: ");
	fflush(stdin); scanf("%d", &num);
	
	printf("\n A soma �: %d", somaInt(soma));
	
	getch();
	return(0);
}

