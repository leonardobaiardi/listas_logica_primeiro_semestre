/*Uma empresa decidiu dar uma gratifica��o de Natal aos seus funcion�rios, baseada no n�mero de horas extras e no n�mero de horas que o funcion�rio faltou ao trabalho. 
O valor do pr�mio � obtido pela consulta na tabela a seguir, em que: 
H = (N�mero de horas extras) - (2/3 * (N�meros de horas-falta))

Elabore um algoritmo em linguagem C, que receba o n�mero de horas extras e o n�mero de horas-falta em minutos de um funcion�rio. 
Imprima o n�mero de horas extras em horas, o n�mero de horas-falta em horas e o valor do pr�mio.
*/

//Bibliotecas/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Vari�veis globais/
int horas_extras_min, horas_falta_min, horas_extras_h, horas_falta_h, H, premio;

//Corpo do programa/
int main ()
{
	setlocale(LC_ALL, "");
	
	printf("\nInsira suas horas extras em minutos: ");
	fflush(stdin);
	scanf("%d", &horas_extras_min);

	printf("\nInsira suas horas falta em minutos: ");
	fflush(stdin);
	scanf("%d", &horas_falta_min);
	
	H = horas_extras_min - (0.66 * horas_falta_min);
	printf("\nH = %d", H);
	
	horas_extras_h = (horas_extras_min/60);
	horas_falta_h = (horas_falta_min/60);
	
	/*
	if (H > 2400)
		{
		printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$500.", horas_extras_h, horas_falta_h);
		}
		else
		if (2400 > H > 1801)
		{
		printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$400.", horas_extras_h, horas_falta_h);
		}
			else
			if (1800 > H > 1201)
			{
			printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$300.", horas_extras_h, horas_falta_h);
			}
				else
				if ( 1200 > H > 600)
				{
				printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$200.", horas_extras_h, horas_falta_h);
				}
					else
					if (H < 600)
					printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$100.", horas_extras_h, horas_falta_h);
*/
		if (H < 600)
		{
		printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$100.", horas_extras_h, horas_falta_h);
		}
		else
		if (1200 > H > 600)
		{
		printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$200.", horas_extras_h, horas_falta_h);
		}
			else
			if (1800 > H > 1201)
			{
			printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$300.", horas_extras_h, horas_falta_h);
			}
				else
				if ( 2400 > H > 1801)
				{
				printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$400.", horas_extras_h, horas_falta_h);
				}
					else
					if (H > 2400)
					printf("\nSua quantidade de horas extras em horas �: %d\nSua quantidade de horas-falta, em horas �: %d\nSua gratifica��o � de R$500.", horas_extras_h, horas_falta_h);

		
getch();
return(0);

	
	
	
}

