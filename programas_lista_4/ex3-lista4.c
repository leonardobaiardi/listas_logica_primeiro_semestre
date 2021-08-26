/*
ALUNO: LEONARDO BAIARDI LOPES

PRONTU�RIO: SP3070751

PER�ODO: NOTURNO

EXERC�CIO: 3
*/

/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Vari�veis*/
int contador, auxiliar, lmt, tot, coluna, divisiveis; /*o contador vai de 0 at� o limite dado*/

/*Corpo do programa*/
int main ()
{
	/*define: tamanho da tela, cor de texto e fundo, limpa a tela*/
	system("mode 60, 100"); system("color f0"); system("cls");
	
	/*solicita o limite*/
	printf("Digite o limite: "); 
	fflush(stdin); scanf("%i", &lmt);
	
	/*zera todas as vari�veis para evitar lixo de mem�ria (precisa ser ANTES do looping)*/
	contador = 0;
	tot = 0;
	coluna = 0;
	
	/*executa o looping que exibe todos os n�meros primos dentro do limite dado pelo usu�rio*/
	do
	{
		/*verifica se o n�mero � primo*/
		divisiveis = 0;
		auxiliar = 1;
		while (auxiliar <= contador)
		{
			if ( contador % auxiliar == 0 )
				divisiveis++;
				auxiliar++;
		}
		
		/*caso o numero seja primo, ele � mostrado*/
		if (divisiveis == 2)
		{	
			/*tot++;
			if (coluna<5){
				printf("[%4i]", contador);
				coluna++;
			}
			else{
				printf("\n[%4i]", contador);
				coluna=1;*/
			}
		}
		contador++;
	}
	while (contador <= lmt);
	
	/*mostra o total de n�meros primos dentro do intervalo*/
	printf("\n\nExiste um total de [%i] n%Cmeros primos neste intervalo.", tot, 163);
	
	/*finaliza o programa*/
	getch();
	return (0);
	
}





