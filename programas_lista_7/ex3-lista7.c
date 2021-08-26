/*
LISTA 07 - EXERC�CIO 3

ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: SP3070751
PER�ODO: NOTURNO

3) Codifique o programa em linguagem C com uma fun��o que receba como par�metro o raio de uma esfera, 
calcule e mostre no programa principal qual o seu volume: v=4/3*R�.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Vari�veis globais */
int raio, r_ao_cubo;
float vol;

/* Prot�tipos de fun��es */
int calculaVolume(void);
int main();

/* Constru��o das fun��es */
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
