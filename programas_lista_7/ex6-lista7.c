/*
LISTA 07 - EXERC�CIO 6

ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: SP3070751
PER�ODO: NOTURNO

6) Codifique o programa em linguagem C com uma fun��o que receba um valor inteiro e positivo,
calcule e mostre o seu fatorial.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Vari�veis globais */
int num, fatorial=1;

/* Prot�tipos de fun��es */
int mostraFatorial();
int main();

/* Constru��o das fun��es */
int mostraFatorial(){
	for( num ; num>0 ; num--) {
	fatorial = fatorial*num;
	}
	return(fatorial);
}

/* Corpo do programa */
int main()
{
	setlocale(LC_ALL, "");
	printf("\n Insira um valor: ");
	fflush(stdin); scanf("%d", &num);
	
	printf("\n\n O fatorial deste n�mero �: %d", mostraFatorial(fatorial));
	
	getch();
	return(0);
}
