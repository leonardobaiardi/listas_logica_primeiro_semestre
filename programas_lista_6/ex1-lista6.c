/*

LISTA 6 - EXERC�CIO 1 -IFSP
LEONARDO BAIARDI LOPES
SP3070751
PER�ODO NOTURNO

1. Codifique o programa em Linguagem C que leia 10 n�meros reais para um vetor e, em seguida, imprima todos os n�meros na tela. 
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>


/* Vari�veis */
int vetor [9], n=0, cont1, cont2, aux=1;

/* Constantes */
#define TAM 10

/* Corpo do programa */
int main()
{
	setlocale(LC_ALL, "");										// Permite o uso da norma padr�o ortogr�fica do portugu�s
	
	printf("\n Insira 10 n�meros reais: \n");					// Solicita os n�meros e armazena todos os valores dentro de um vetor
	
	for(cont1=0; cont1<TAM ; cont1++)
	{
	fflush(stdin);
	scanf("\t%d",&vetor[cont1]);
	}
	
	do															// Perfumaria para entreter o usu�rio, cria a ilus�o de que o programa est� processando os dados
	{
		system("cls");
		printf("\n\n\n\n\t\t\t PROCESSANDO DADOS [%d0%c]", n, 37);
		n++;
		Sleep(5);
	}
	while( n < 11 );
	
	Sleep(2000);
	system("cls");
	
	for (cont2 = 0 ; cont2 < 10 ; cont2++)							// La�o de repeti��o para exibir o input do usu�rio
		printf("\n %2do N�mero: %2d", aux++, vetor[cont2]);
		
	getch();
	return(0);
}

