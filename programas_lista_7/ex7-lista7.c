/*
LISTA 07 - EXERC�CIO 7

ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: SP3070751
PER�ODO: NOTURNO

7) Codifique o programa em linguagem C com uma fun��o que receba o 
valor de altura e largura de uma parede e calcule e mostre o valor da �rea.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Vari�veis globais */
int x, y, area;

/* Prot�tipos de fun��es */
void calculaArea(void);
int main();

/* Constru��o das fun��es */
void calculaArea(void){
	area=x*y;
	printf("\n\n Area: %d m^2", area);
}

/* Corpo do programa */
int main()
{
	printf("\n Insira o comprimento da parede, em metros: ");
	fflush(stdin); scanf("%d", &x);
	printf("\n Insira a altura da parede, em metros: ");
	fflush(stdin); scanf("%d", &y);
	
	calculaArea();
	
	getch();
	return(0);
}
