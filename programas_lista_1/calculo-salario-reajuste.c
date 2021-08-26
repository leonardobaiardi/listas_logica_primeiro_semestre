/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Variáveis globais*/
/*tipo dado / nome dado à variável*/ 
float slr;
float slr_acr;
float slr_final;

float main ()
{
	/*Solicita e colhe o valor do salário*/
	printf("\nInsira o seu salario: ");
	fflush(stdin);
	scanf("%f", &slr);
	
	/*
	Fórmula do reajuste
	
	slr_acr = slr*0.25
	
	slr_final = slr+slr_acr
	*/
	
	slr_acr = slr*0.25;
	slr_final = slr+slr_acr;
	
	printf("\nSeu salario reajustado e de: %.2f", slr_final);
	fflush(stdin);
	
	return (0);
	getch ();
}

