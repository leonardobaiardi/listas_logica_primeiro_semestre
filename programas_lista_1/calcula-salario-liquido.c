/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Vari�veis globais*/
/*tipo dado / nome dado � vari�vel*/
float salario_bruto;
float salariob_sem_prev;
float valor_descontado_prev;
float desconto_ir;
float valor_descontado_ir;
float salariob_sem_prev_ir;
float salario_liquido;

float main()
{
	/*Colhe o valor do salario bruto*/
	printf("\nInsira o valor de seu salario bruto, em reais:  ");
	fflush(stdin);
	scanf("%f", &salario_bruto);
	
	
	/*Calcula o desconto e cria a vari�vel do sal�rio com o desconto da previd�ncia*/
	salariob_sem_prev = (salario_bruto*0.915);	
	valor_descontado_prev = (salario_bruto-salariob_sem_prev);
	/*Printa o valor arrecadado para a previd�ncia a partir do sal�rio bruto*/
	printf("\n\nO valor arrecadado para sua previdencia e de: %.2f reais", valor_descontado_prev);
	fflush(stdin);
	
	
	/*Calcula o valor descontado para o IR, a partir do valor descontado pela previd�ncia*/
	desconto_ir = (salariob_sem_prev*0.725);
	valor_descontado_ir = (salariob_sem_prev-desconto_ir);
	/*Printa o valor descontado pelo IR a partir do valor descontado pela previd�ncia*/
	printf("\nO valor descontado pelo IR e de: %.2f reais", valor_descontado_ir);
	fflush(stdin);
	
	/*Calcula o sal�rio l�quido (salario_bruto_descontado_prev-desconto_ir)*/
	salario_liquido = (salariob_sem_prev-valor_descontado_ir);
	/*Printa o sal�rio l�quido a partir dos descontos de IR e previdencia*/
	printf("\nO valor do salario liquido e de: %.2f reais", salario_liquido);
	
	return (0);
	getch ();
}

