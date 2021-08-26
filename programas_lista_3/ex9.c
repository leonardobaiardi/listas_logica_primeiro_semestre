/*Elabore um algoritmo em linguagem C, que l� 2 valores a e b e os escreve com uma das mensagens: 
"S�o m�ltiplos" ou 
"N�o s�o m�ltiplos"
*/


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
=== L�GICA POR TR�S DO EXERC�CIO ===
a/b precisa ter resto zero para que eles sejam m�ltiplos, portanto
if (a % b = 0)
	printf("\nOs n�meros s�o m�ltiplos.);
else
	printf("\nOs n�meros n�o s�o m�ltiplos.);
*/

//Vari�veis
int a, b;
//Corpo do programa
int main()
{
	setlocale(LC_ALL, "");
	
	printf("\n\t\t\tIDENTIFICADOR DE M�LTIPLOS INTEIROS");
	printf("\n\nInsira o primeiro n�mero: ");
	fflush(stdin);
	scanf("%d", &a);
	
	printf("\n\nInsira o segundo n�mero: ");
	fflush(stdin);
	scanf("%d", &b);
	
	if (a % b == 0)
		printf("\nOs n�meros s�o m�ltiplos.");
	else
		printf("\nOs n�meros n�o s�o m�ltiplos.");
	
	getch();		
	return(0);
}
