/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*Variáveis*/
int intervalo, aux=1, contador=1;

/*Corpo do programa*/
int main()
{
	setlocale(LC_ALL, "");
	
	/*Bloco para inicializar o programa*/
	/*while(1)*/
	
	system("cls");
	printf("\nInsira um intervalo: ");
	fflush(stdin); scanf("%i", &intervalo);
	/*	if (intervalo <= 0) /*Caso seja 0, o algoritmo recusa o input e pede outro*/
	/*		printf("\nValor inserido é inválido, insira um número maior do que 0.");
			getch();
	}*/
	
	do
	{
		/*contador % aux == a;
		contador % contador == b;
		contador++;*/
		
		
		/*if (aux/1==aux)
			if (aux/aux==1)
				printf("\n[%i]", aux);
		
			aux++;*/

	}
	while (contador >= intervalo);
	
	
	return(0);
}


