/*
LISTA 05 
LEONARDO BAIARDI LOPES
SP3070751
LG1A1 PERÍODO NOTURNO

2. Faça um algoritmo que imprima o quadrado de todos os números inteiros entre 15 e 200.
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Variáveis 
int i, ii, cardinal = 1, max = 200;

// Corpo do programa
int main()
{
	setlocale(LC_ALL,"");
	
	for (i = 15 ; i < max ; i++)
	{
		ii = (i * i);
		printf("\n %2do. número ao quadrado: [%5i]", cardinal++, ii);
	}
	
	
	return(0);
}
