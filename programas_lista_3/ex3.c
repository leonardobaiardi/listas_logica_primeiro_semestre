/*Elabore um algoritmo em linguagem C, que leia as variáveis C e N, respectivamente, código e número de horas trabalhadas de um operário. 
Calcule o salário sabendo que ele ganha R$10,00 por hora. 
Quando o número de horas excederem 50, calcule o excesso, e armazene-o na variável E, caso contrário zerar a variável. 
A hora excedente de trabalho vale R$20,00. 
No final do processamento imprimir o salário total e o salário excedente. 
*/

// bibliotecas /
#include <stdio.h>
#include <stdlib.h>

// variáveis globais /
int N, C, S, E, Ex;

// corpo do programa /
int main ()
{
	// colhe as informações para calculo do salário /
	printf("Insira as horas trabalhadas: ");
	fflush(stdin);
	scanf("%i", &N);
	
	// calcula o salário e o quanto de excedente o operário têm /
	S = N * 10;
	E = N - 50;
	
	// estrutura condicional para calculo de excedente /
		if (N > 50)
			E=N-50;
		else
			E=0;
	
	// fórmula para cálculo do excedente /
	Ex = E * 20;
	
	// printa o salário e o excedente /
	printf ("\n Seu salario e de: R$%i, ja seu seu excedente R$%i", S, Ex);
	
	// aguarda o pressionar de uma tecla e finaliza o programa /
	getch();
	return(0);
}
