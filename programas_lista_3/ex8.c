//bibliotecas/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//vari�veis globais/
int a=0, b=0, c=0, maior;

//corpo do programa/
int main()
{
	setlocale (LC_ALL, "");
	//solicita os n�meros/
	printf("Insira abaixo tr�s n�meros, o maior ser� identificado e mostrado em destaque.");
	printf("\n\nPrimeiro n�mero: ");
	fflush(stdin);
	scanf("%d", &a);
	
	printf("\nSegundo n�mero: ");
	fflush(stdin);
	scanf("%d", &b);
	
	printf("\nTerceiro n�mero: ");
	fflush(stdin);
	scanf("%d", &c);
	
	//printa os n�meros digitados/
	printf("\n\nVerifique os n�meros digitados abaixo");
	printf("\nPrimeiro n�mero: %d", a);
	printf("\nSegundo n�mero: %d", b);
	printf("\nTerceiro n�mero: %d", c);
	
	//printa qual o maior com uso de operador tern�rio/
	maior = (a>b && a>c) ? a : (b>a && b>c) ? b: c;
	printf("\n\nO maior deles �: [%d]", maior);
	
	getch();
	return (0);
}
