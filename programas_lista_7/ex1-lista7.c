/*
LISTA 07 - EXERCÍCIO 1

ALUNO: LEONARDO BAIARDI LOPES
PRONTUÁRIO: SP3070751
PERÍODO: NOTURNO

1) Codifique o programa em linguagem C com uma função que receba 
um número inteiro e positivo N como parâmetro e retorne a soma 
dos números inteiros existentes entre 1 e N (inclusive).
*/

/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Variáveis globais */
int num, cont, soma;

/* Protótipos de funções */
int somaInt();
int main();

/* Construção das funções */
int somaInt() 
{		
	for(cont=0 ; cont<=num ; cont++) {
		soma = soma+cont;
		}
		return (soma);
}

/* Corpo do programa */
int main()
{
	setlocale(LC_ALL, "");
	printf("\n Insira um valor: ");
	fflush(stdin); scanf("%d", &num);
	
	printf("\n A soma é: %d", somaInt(soma));
	
	getch();
	return(0);
}

