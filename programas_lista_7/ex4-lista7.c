/*
LISTA 07 - EXERC�CIO 4

ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: SP3070751
PER�ODO: NOTURNO

4) Codifique o programa em linguagem C com uma fun��o que receba um n�mero e informe se ele � positivo ou negativo.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Constantes */

/* Vari�veis globais */
int num;
char opc;

/* Prot�tipos de fun��es */
void verificaValor(void);
int main();

/* Constru��o das fun��es */
void verificaValor(void) {
	if(num>=0)
		printf("\n POSITIVO");
		else
		printf("\n NEGATIVO");
}
/* Corpo do programa */
int main()
{
	do
	{
		system("cls");
		printf("\n Insira um valor qualquer: ");
		fflush(stdin); scanf("%d", &num);
		
		verificaValor();
		
		printf("\n\nVERIFICAR OUTRO VALOR? [SAIR=N]");
		opc=getch();
		
	}	
	while (opc != 'N' && opc != 'n'); 
	
	return(0);
}
