/*
LISTA 07 - EXERCÍCIO 7

ALUNO: LEONARDO BAIARDI LOPES
PRONTUÁRIO: SP3070751
PERÍODO: NOTURNO

7) Codifique o programa em linguagem C com uma função que receba o 
valor de altura e largura de uma parede e calcule e mostre o valor da área.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Variáveis globais */
int x, y, area;

/* Protótipos de funções */
void calculaArea(void);
int main();

/* Construção das funções */
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
