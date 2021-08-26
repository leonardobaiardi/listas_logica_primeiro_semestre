/*
LISTA 07 - EXERCÍCIO 4

ALUNO: LEONARDO BAIARDI LOPES
PRONTUÁRIO: SP3070751
PERÍODO: NOTURNO

4) Codifique o programa em linguagem C com uma função que receba um número e informe se ele é positivo ou negativo.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Constantes */

/* Variáveis globais */
int num;
char opc;

/* Protótipos de funções */
void verificaValor(void);
int main();

/* Construção das funções */
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
