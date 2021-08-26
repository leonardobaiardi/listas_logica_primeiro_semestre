/*Elabore um algoritmo em linguagem C, que leia as vari�veis C e N, respectivamente, c�digo e n�mero de horas trabalhadas de um oper�rio. 
Calcule o sal�rio sabendo que ele ganha R$10,00 por hora. 
Quando o n�mero de horas excederem 50, calcule o excesso, e armazene-o na vari�vel E, caso contr�rio zerar a vari�vel. 
A hora excedente de trabalho vale R$20,00. 
No final do processamento imprimir o sal�rio total e o sal�rio excedente. 
*/

// bibliotecas /
#include <stdio.h>
#include <stdlib.h>

// vari�veis globais /
int N, C, S, E, Ex;

// corpo do programa /
int main ()
{
	// colhe as informa��es para calculo do sal�rio /
	printf("Insira as horas trabalhadas: ");
	fflush(stdin);
	scanf("%i", &N);
	
	// calcula o sal�rio e o quanto de excedente o oper�rio t�m /
	S = N * 10;
	E = N - 50;
	
	// estrutura condicional para calculo de excedente /
		if (N > 50)
			E=N-50;
		else
			E=0;
	
	// f�rmula para c�lculo do excedente /
	Ex = E * 20;
	
	// printa o sal�rio e o excedente /
	printf ("\n Seu salario e de: R$%i, ja seu seu excedente R$%i", S, Ex);
	
	// aguarda o pressionar de uma tecla e finaliza o programa /
	getch();
	return(0);
}
