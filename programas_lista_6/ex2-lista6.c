/*

LISTA 6 - EXERCÍCIO 2 -IFSP
LEONARDO BAIARDI LOPES
SP3070751
PERÍODO NOTURNO

2. Codifique o programa em Linguagem C que leia 10 números inteiros, armazenando em um vetor o quadrado de cada número lido e, em seguida, imprima os elementos. 

*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>

/* Constantes */
#define TAM 10

/* Variáveis */
int vetor[TAM], vetor_ao_quadrado[TAM], n=0, cont, aux=0;

/* Corpo do programa */
int main ()
{
	setlocale(LC_ALL, "");																		// permite a utilização de acentuação
	
	printf("\n Este algoritmo lê os números inseridos e te retorna o quadrado deles.");			// informações para o usuário
	printf("\n\n Insira %d números inteiros: \n", TAM);											// solicita os números 
	for (cont=0 ; cont<TAM ; cont++)															// laço de repetição para armazenar os números do vetor
	{
		printf("\n\tDigite o número: ");
		fflush(stdin);
		scanf("%d", &vetor[cont]);
	}
	
	do															// Perfumaria para entreter o usuário, cria a ilusão de que o programa está processando os dados
	{
		system("cls");
		printf("\n\n\n\n\tPROCESSANDO DADOS [%d0%c]", n, 37);
		n++;
		Sleep(35);
	}
	while( n < 10 );
	
	system("cls");												
	printf("\n\n\n\n\tASSIMILANDO INFORMAÇÕES [%d0%c]", n, 37);  // Perfumaria
	Sleep(4000);												// Pausa dramática
	system("cls");												// Limpa a tela
	
	printf("\n\n");
	for (cont=0 ; cont<TAM ; cont++)
	{
		(vetor_ao_quadrado[cont]) = (vetor[cont]) * (vetor[cont]);
		printf("\n %2do número ao quadrado: [%3d]\n", ++aux, vetor_ao_quadrado[cont]);
	}
		
	getch();
	return(0);
}
