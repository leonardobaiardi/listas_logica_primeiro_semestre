/*
LISTA 07 - EXERCÍCIO 6

ALUNO: LEONARDO BAIARDI LOPES
PRONTUÁRIO: SP3070751
PERÍODO: NOTURNO

6) Codifique o programa em linguagem C com uma função que receba um valor inteiro e positivo,
calcule e mostre o seu fatorial.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Variáveis globais */
int num, fatorial=1;

/* Protótipos de funções */
int mostraFatorial();
int main();

/* Construção das funções */
int mostraFatorial(){
	for( num ; num>0 ; num--) {
	fatorial = fatorial*num;
	}
	return(fatorial);
}

/* Corpo do programa */
int main()
{
	setlocale(LC_ALL, "");
	printf("\n Insira um valor: ");
	fflush(stdin); scanf("%d", &num);
	
	printf("\n\n O fatorial deste número é: %d", mostraFatorial(fatorial));
	
	getch();
	return(0);
}
