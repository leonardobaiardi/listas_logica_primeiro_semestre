/*
LISTA 05 
LEONARDO BAIARDI LOPES
SP3070751
LG1A1 PER�ODO NOTURNO

5. Fa�a um algoritmo que leia a base e o expoente e calcule a pot�ncia de um n�mero inteiro.
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

// Vari�veis 
int base, expoente, potencia, aux=0, base_potenciada=1;

// Corpo do programa
int main()
{
	setlocale(LC_ALL,"");								// permite o uso de acentos da norma padr�o do portugu�s brasileiro
	
	printf("\nInsira a base: ");						// solicita e armazena a base
	fflush(stdin); scanf("%d", &base);
	
	printf("\nInsira o expoente: ");					// solicita e armazena o expoente
	fflush(stdin); scanf("%d", &expoente);	
	
	for(aux ; aux<expoente ; aux++)						// come�ando de zero, o looping repete at� que o auxiliar seja igual ao expoente, para que a multiplica��o ocorra corretamente.
	
		base_potenciada *= base;						// o operador *= multiplica o valor da express�o � direita pelo valor da vari�vel � esquerda e armazena o resultado nela.
		
	printf("\nPot�ncia = [%d]", base_potenciada);		// mostra o resultado da pot�ncia
	
	getch();											// solicita o apertar de uma tecla
	return(0);											// finaliza o programa
}
