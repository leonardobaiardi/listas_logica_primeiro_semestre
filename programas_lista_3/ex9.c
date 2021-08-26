/*Elabore um algoritmo em linguagem C, que lê 2 valores a e b e os escreve com uma das mensagens: 
"São múltiplos" ou 
"Não são múltiplos"
*/


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
=== LÓGICA POR TRÁS DO EXERCÍCIO ===
a/b precisa ter resto zero para que eles sejam múltiplos, portanto
if (a % b = 0)
	printf("\nOs números são múltiplos.);
else
	printf("\nOs números não são múltiplos.);
*/

//Variáveis
int a, b;
//Corpo do programa
int main()
{
	setlocale(LC_ALL, "");
	
	printf("\n\t\t\tIDENTIFICADOR DE MÚLTIPLOS INTEIROS");
	printf("\n\nInsira o primeiro número: ");
	fflush(stdin);
	scanf("%d", &a);
	
	printf("\n\nInsira o segundo número: ");
	fflush(stdin);
	scanf("%d", &b);
	
	if (a % b == 0)
		printf("\nOs números são múltiplos.");
	else
		printf("\nOs números não são múltiplos.");
	
	getch();		
	return(0);
}
