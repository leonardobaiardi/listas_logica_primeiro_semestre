/*
LISTA 07 - EXERCÍCIO 3

ALUNO: LEONARDO BAIARDI LOPES
PRONTUÁRIO: SP3070751
PERÍODO: NOTURNO

3) Codifique o programa em linguagem C com uma função que receba como parâmetro o raio de uma esfera, 
calcule e mostre no programa principal qual o seu volume: v=4/3*R³.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Variáveis globais */
int raio, r_ao_cubo;
float vol;

/* Protótipos de funções */
int calculaVolume(void);
int main();

/* Construção das funções */
int calculaVolume(void)
{
	r_ao_cubo=(raio*raio*raio);
	vol = ((4*r_ao_cubo)/3);
	return(vol);
}


/* Corpo do programa */
int main()
{
	printf("\n Insira o raio da esfera: ");
	fflush(stdin); scanf("%d", &raio);
	calculaVolume();
	
	printf("\n\nVolume da esfera: [%.2f cm^3]", vol);
	
	getch();
	return(0);
}
