/*
LISTA 05 
LEONARDO BAIARDI LOPES
SP3070751
LG1A1 PERÍODO NOTURNO

4. Faça um programa que leia uma quantidade indeterminada de números positivos 
e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75], [76-100]. 
A entrada de dados deverá terminar quando for lido um número negativo. (utilize enquanto).
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Variáveis
int x, intervalo1, intervalo2, intervalo3, intervalo4;

// Corpo do programa
int main()
{
	setlocale(LC_ALL, "");
	
	while(x>=0)
	{
		printf("\nInsira um número: ");
		fflush(stdin); scanf("%i", &x);
		if (x>=0 && x<=25) intervalo1++;
		else
			if (x>=26 && x<=50) intervalo2++;
			else
				if (x>=51 && x<=75) intervalo3++;
				else
					if (x>=76 && x<=100) intervalo4++;
	}
	printf("\nNros. no intervalo [0 à 25]: %i\nNros. no intervalo [26 à 50]: %i\nNros. no intervalo [51 à 75]: %i\nNros. no intervalo [76 à 100]: %i", intervalo1, intervalo2, intervalo3, intervalo4);
	
	
	
	getch();
	return (0);
}


