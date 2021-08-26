/*
LISTA 05 
LEONARDO BAIARDI LOPES
SP3070751
LG1A1 PERÍODO NOTURNO

5. Faça um algoritmo que leia a base e o expoente e calcule a potência de um número inteiro.
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

// Variáveis 
int base, expoente, potencia, aux=0, base_potenciada=1;

// Corpo do programa
int main()
{
	setlocale(LC_ALL,"");								// permite o uso de acentos da norma padrão do português brasileiro
	
	printf("\nInsira a base: ");						// solicita e armazena a base
	fflush(stdin); scanf("%d", &base);
	
	printf("\nInsira o expoente: ");					// solicita e armazena o expoente
	fflush(stdin); scanf("%d", &expoente);	
	
	for(aux ; aux<expoente ; aux++)						// começando de zero, o looping repete até que o auxiliar seja igual ao expoente, para que a multiplicação ocorra corretamente.
	
		base_potenciada *= base;						// o operador *= multiplica o valor da expressão à direita pelo valor da variável à esquerda e armazena o resultado nela.
		
	printf("\nPotência = [%d]", base_potenciada);		// mostra o resultado da potência
	
	getch();											// solicita o apertar de uma tecla
	return(0);											// finaliza o programa
}
