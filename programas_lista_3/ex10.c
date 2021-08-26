/*10. Elabore um algoritmo em linguagem C, que l� um conjunto de 4 valores i, a, b, c, 
onde i � um valor inteiro e positivo e a, b, c, s�o quaisquer valores reais e os mostre em tela. 
A seguir: 
a) Se i=1 escrever os tr�s valores a, b, c em ordem crescente. 
b) Se i=2 escrever os tr�s valores a, b, c em ordem decrescente. 
*/

/*
L�GICA POR TR�S DO EXERC�CIO

if i=1, analisar a, b e c, identificar menor<medio<maior e printar
*/
//Bibliotecas/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Vari�veis/
int i, a, b, c;

//Corpo do programa/
int main ()
{
	setlocale(LC_ALL, "");
	//Interface/
	printf("==========================================================");
	printf("\n\t\tORGANIZADOR NUM�RICO V1.0");
	printf("\n==========================================================");
	printf("\n\n\tPARA i=[1] -> ORGANIZA��O CRESCENTE");
	printf("\n\tPARA i=[2] -> ORGANIZA��O DECRESCENTE");
	printf("\n\n==========================================================");

	//Colhe as informa��es do usu�rio/		
	printf("\nInsira o primeiro n�mero: ");
	scanf("%d", &a);
	printf("\nInsira o segundo n�mero: ");
	scanf("%d", &b);
	printf("\nInsira o terceiro n�mero: ");
	scanf("%d", &c);
	printf("==========================================================");
	
	printf("\n\nInsira o valor escolhido para i: ");
	scanf("%d", &i);
	printf("\n==========================================================");	
	
	if (i==1)
	{
		if (c < b && c < a && b < a)
		printf("\n%d, %d, %d", c, b, a);
			else
			if (c < b && c < a && a < b)
			printf("\n%d, %d, %d", c, a, b);
			else
				if (b < c && b < a && a < c)
				printf("\n%d, %d, %d", b, a, c);
				else
					if (b < c && b < a && c < a)
					printf("\n%d, %d, %d", b, c, a);
					else
						if (a < b && a < c && b < c)
						printf("\n%d, %d, %d", a, b, c);
						else
							if (a < b && a < c && c < b)
							printf("\n%d, %d, %d", a, c, b);
	}
	if (i == 2)
	{
			if (c < b && c < a && b < a)
			printf("\n%d, %d, %d", a, b, c);
			else
			if (c < b && c < a && a < b)
			printf("\n%d, %d, %d", b, a, c);
			else
				if (b < c && b < a && a < c)
				printf("\n%d, %d, %d", c, a, b);
				else
					if (b < c && b < a && c < a)
					printf("\n%d, %d, %d", a, c, b);
					else
						if (a < b && a < c && b < c)
						printf("\n%d, %d, %d", c, b, a);
						else
							if (a < b && a < c && c < b)
							printf("\n%d, %d, %d", b, c, a);
	}
		if (i != 1 && i != 2)
		{
		printf("\nVALOR INSERIDO � INV�LIDO! ABORTANDO PROGRAMA");
		exit(0);
		}
	return(0);
}
