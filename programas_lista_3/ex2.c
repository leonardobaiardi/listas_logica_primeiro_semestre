/*Elabore um algoritmo em Linguagem C para calcular o salário dos funcionários e o valor da gratificação a receber. 
Os dados de entrada são:
-o número de horas trabalhadas e 
-o valor da hora (salário = número de horas * valor da hora). 
Se o salário for menor que R$ 1.500,00, o valor da gratificação é R$ 300,00; 
Se for maior, o valor é de R$ 500,00. 
O programa deverá calcular o valor da gratificação. */


// bibliotecas /
#include <stdlib.h>
#include <stdio.h>

// variáveis globais / 
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
	
	
	// faz o cálculo do salário + estrutura condicional para printar o valor da gratificação / 
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

