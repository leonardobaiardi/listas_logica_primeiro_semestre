/*
LISTA 08 - LG1A1 - IFSP
ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: 3070751
PER�ODO: NOTURNO

EX.2) Para o c�digo anterior, inclua um campo "media" na estrutura student. 
	  Codifique uma fun��o que calcule a m�dia de N notas. Teste suas imple-
	  menta��es dentro do main.
*/

/* Bibliotecas */
#include <stdio.h>
#include <conio.h>

/* Constantes */
#define N 4

/* Defini��o do tipo de dados chamado student*/
typedef struct 
{
	char name [20];
	int eng, math, phys;
	float media;
	
} student;

/* Vari�veis globais */
int i;

student data [N] =
{
	{"Evandro", 82, 72, 58},
	{"Thomas",  77, 82, 79},
	{"Sabrina", 52, 62, 39},
	{"Melinda", 61, 82, 88},
};

/* Fun��o */
float calculaMedia();
int main(); 

/* Constru��o da fun��o */
float calculaMedia()
{
	data[i].media = ( data[i].eng + data[i].math + data[i].phys ) / 3;
	return (data[i].media);
}

int main (void)
{
	for (i=0; i<N; i++)
	{
		printf ("%7s: Eng = %3d Math =%3d Phys = %3d MEDIA= %.2f\n\n", data[i].name, data[i].eng, data[i].math, data[i].phys, calculaMedia());
	}
	
	getch();
	return(0);
}
