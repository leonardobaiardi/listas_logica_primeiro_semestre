/*
LISTA 07 - EXERC�CIO 2

ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: SP3070751
PER�ODO: NOTURNO

2) Codifique o programa em linguagem C com uma fun��o que receba tr�s n�meros inteiros como par�metros, 
representado horas, minutos e segundos, e os converta em segundos. Exemplo: 2h:40min:10s correspondem a 9610 segundos.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Vari�veis globais */
int hora, minuto, segundo, h_em_seg, min_em_seg, h_convert;

/* Prot�tipos de fun��es */
void converteTempo(void);
int main();

/* Constru��o das fun��es */
void converteTempo(void)
{
	h_em_seg=hora*3600;
	min_em_seg=minuto*60;
	h_convert = ( h_em_seg + min_em_seg + segundo );
	
	printf("\n %dh:%dmin:%ds correspondem a %d segundos.", hora, minuto, segundo, h_convert);	
}
/* Corpo do programa */
int main ()
{
	printf("\n Insira as horas: ");
	fflush(stdin); scanf("%d", &hora);
	printf("\n Insira os minutos: ");
	fflush(stdin); scanf("%d", &minuto);
	printf("\n Insira os segundos: ");
	fflush(stdin); scanf("%d", &segundo);
	
	converteTempo();
	
	getch();
	return(0);
}

