/*Elabore um algoritmo em Linguagem C para calcular o sal�rio dos funcion�rios e o valor da gratifica��o a receber. 
Os dados de entrada s�o:
-o n�mero de horas trabalhadas e 
-o valor da hora (sal�rio = n�mero de horas * valor da hora). 
Se o sal�rio for menor que R$ 1.500,00, o valor da gratifica��o � R$ 300,00; 
Se for maior, o valor � de R$ 500,00. 
O programa dever� calcular o valor da gratifica��o. */


// bibliotecas /
#include <stdlib.h>
#include <stdio.h>

// vari�veis globais / 
int hrs_trb;
float valor_hr;
float salario;

// corpo do programa
float main ()
{
	// solicita os dados de horas e valor hora /
	printf("\nInsira o numero de horas trabalhadas: ");
	scanf("%i", &hrs_trb);
	
	printf("\nInsira o valor de sua hora: ");
	scanf("%f", &valor_hr);
	
	
	// faz o c�lculo do sal�rio + estrutura condicional para printar o valor da gratifica��o / 
	salario = hrs_trb*valor_hr;
	
		if (salario > 1500){
			printf("\n\nSeu salario e de: R$%.2f, e sua gratificacao e de R$500,00", salario);
		}
		if (salario < 1500){
			printf("\n\nSeu salario e de: R$%.2f, e sua gratificacao e de R$300,00", salario);
		}
	
	
	// aguarda o apertar de uma tecla e finaliza o programa /
	getch ();
	return(0);
	
}

