/*

LISTA 6 - EXERC�CIO 2 -IFSP
LEONARDO BAIARDI LOPES
SP3070751
PER�ODO NOTURNO

2. Codifique o programa em Linguagem C que leia 10 n�meros inteiros, armazenando em um vetor o quadrado de cada n�mero lido e, em seguida, imprima os elementos. 

*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>

/* Constantes */
#define TAM 10

/* Vari�veis */
int vetor[TAM], vetor_ao_quadrado[TAM], n=0, cont, aux=0;

/* Corpo do programa */
int main ()
{
	setlocale(LC_ALL, "");																		// permite a utiliza��o de acentua��o
	
	printf("\n Este algoritmo l� os n�meros inseridos e te retorna o quadrado deles.");			// informa��es para o usu�rio
	printf("\n\n Insira %d n�meros inteiros: \n", TAM);											// solicita os n�meros 
	for (cont=0 ; cont<TAM ; cont++)															// la�o de repeti��o para armazenar os n�meros do vetor
	{
		printf("\n\tDigite o n�mero: ");
		fflush(stdin);
		scanf("%d", &vetor[cont]);
	}
	
	do															// Perfumaria para entreter o usu�rio, cria a ilus�o de que o programa est� processando os dados
	{
		system("cls");
		printf("\n\n\n\n\tPROCESSANDO DADOS [%d0%c]", n, 37);
		n++;
		Sleep(35);
	}
	while( n < 10 );
	
	system("cls");												
	printf("\n\n\n\n\tASSIMILANDO INFORMA��ES [%d0%c]", n, 37);  // Perfumaria
	Sleep(4000);												// Pausa dram�tica
	system("cls");												// Limpa a tela
	
	printf("\n\n");
	for (cont=0 ; cont<TAM ; cont++)
	{
		(vetor_ao_quadrado[cont]) = (vetor[cont]) * (vetor[cont]);
		printf("\n %2do n�mero ao quadrado: [%3d]\n", ++aux, vetor_ao_quadrado[cont]);
	}
		
	getch();
	return(0);
}
