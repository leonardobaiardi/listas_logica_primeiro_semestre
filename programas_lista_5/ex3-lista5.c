/*
LISTA 05 
LEONARDO BAIARDI LOPES
SP3070751
LG1A1 PERÍODO NOTURNO

3. Faça um algoritmo que leia e imprima todos os valores (0 a 9) da tabuada solicitada pelo usuário.
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Variáveis
int i, cardinal=0, resultado;

// Corpo do programa
int main()
{
	setlocale(LC_ALL, "");
	
		do															// Sistema para escolher a tabuada
		{
			system("cls");
			printf ("\n=======================");		
			printf ("\n       TABUADAS        ");
			printf ("\n=======================");
			printf ("\n INSIRA UM DOS NÚMEROS ");
			printf ("\n=======================");
			printf ("\n	1 2 3\n ");
			printf ("\n	4 5 6\n ");
			printf ("\n	7 8 9");
			printf ("\n=======================");
			printf ("\nEscolha : ");
			fflush(stdin); scanf("%i", &i);
		}
		while(i>9);													// Caso o input seja diferente do intervalo 1<=i<=9, o algoritmo recusa
	
		for( i ; cardinal<11 ; cardinal++ )							
		{
			resultado = (i * cardinal);
			printf("\n %2i x %2i = %2i", i, cardinal, resultado);
		}
		
	getch();
	return (0);		
}
