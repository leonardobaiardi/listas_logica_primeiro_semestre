/*
LISTA 05 
LEONARDO BAIARDI LOPES
SP3070751
LG1A1 PER�ODO NOTURNO

1. Fa�a um algoritmo que imprima na tela todos os m�ltiplos de 3 entre 0 e 100.
*/


// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// Vari�veis
int i, max = 100 ;

// Corpo do programa
int main ()
{	
	for( i = 0 ; i < max ; i++ )	// i come�a de 0 ; enquanto i for menor que o valor m�ximo ; a cada rodada, incrementa 1 em i
	{
		Sleep(50); 					// Aguarda 0,05 segundos antes de mostrar o pr�ximo m�ltiplo de 3
		
		if (i%3==0)					// Se o resultado da divis�o i/3 for zero, ent�o mostre o n�mero
			printf("[%d]\n", i);
	}
	
	getch();						// Aguarda uma tecla para encerrar o programa
	return (0);
}
