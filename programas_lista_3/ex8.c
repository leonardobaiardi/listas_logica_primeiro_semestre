//bibliotecas/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//variáveis globais/
int a=0, b=0, c=0, maior;

//corpo do programa/
int main()
{
	setlocale (LC_ALL, "");
	//solicita os números/
	printf("Insira abaixo três números, o maior será identificado e mostrado em destaque.");
	printf("\n\nPrimeiro número: ");
	fflush(stdin);
	scanf("%d", &a);
	
	printf("\nSegundo número: ");
	fflush(stdin);
	scanf("%d", &b);
	
	printf("\nTerceiro número: ");
	fflush(stdin);
	scanf("%d", &c);
	
	//printa os números digitados/
	printf("\n\nVerifique os números digitados abaixo");
	printf("\nPrimeiro número: %d", a);
	printf("\nSegundo número: %d", b);
	printf("\nTerceiro número: %d", c);
	
	//printa qual o maior com uso de operador ternário/
	maior = (a>b && a>c) ? a : (b>a && b>c) ? b: c;
	printf("\n\nO maior deles é: [%d]", maior);
	
	getch();
	return (0);
}
