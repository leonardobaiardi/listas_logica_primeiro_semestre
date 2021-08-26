/*
LISTA 05 
LEONARDO BAIARDI LOPES
SP3070751
LG1A1 PERÍODO NOTURNO

1. Faça um algoritmo que imprima na tela todos os múltiplos de 3 entre 0 e 100.
*/


// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// Variáveis
int i, max = 100 ;

// Corpo do programa
int main ()
{	
	for( i = 0 ; i < max ; i++ )	// i começa de 0 ; enquanto i for menor que o valor máximo ; a cada rodada, incrementa 1 em i
	{
		Sleep(50); 					// Aguarda 0,05 segundos antes de mostrar o próximo múltiplo de 3
		
		if (i%3==0)					// Se o resultado da divisão i/3 for zero, então mostre o número
			printf("[%d]\n", i);
	}
	
	getch();						// Aguarda uma tecla para encerrar o programa
	return (0);
}
