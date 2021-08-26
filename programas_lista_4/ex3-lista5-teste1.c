// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Variáveis
int x, cardinal=1, resultado;

// Corpo do programa
int main()
{

	
	for( x ; x<=9 ; x++ )
	{
		printf("\nEscolha a tabuada: ");
		fflush(stdin); scanf("%d", x);
		
		resultado = (x * cardinal);
		printf("\n %d x %d = %d", x, cardinal++, resultado);
	}

	return (0);		
}
