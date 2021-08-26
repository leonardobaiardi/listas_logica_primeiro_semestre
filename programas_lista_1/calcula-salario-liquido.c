/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Variáveis globais*/
/*tipo dado / nome dado à variável*/
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
	
	
	/*Calcula o desconto e cria a variável do salário com o desconto da previdência*/
	salariob_sem_prev = (salario_bruto*0.915);	
	valor_descontado_prev = (salario_bruto-salariob_sem_prev);
	/*Printa o valor arrecadado para a previdência a partir do salário bruto*/
	printf("\n\nO valor arrecadado para sua previdencia e de: %.2f reais", valor_descontado_prev);
	fflush(stdin);
	
	
	/*Calcula o valor descontado para o IR, a partir do valor descontado pela previdência*/
	desconto_ir = (salariob_sem_prev*0.725);
	valor_descontado_ir = (salariob_sem_prev-desconto_ir);
	/*Printa o valor descontado pelo IR a partir do valor descontado pela previdência*/
	printf("\nO valor descontado pelo IR e de: %.2f reais", valor_descontado_ir);
	fflush(stdin);
	
	/*Calcula o salário líquido (salario_bruto_descontado_prev-desconto_ir)*/
	salario_liquido = (salariob_sem_prev-valor_descontado_ir);
	/*Printa o salário líquido a partir dos descontos de IR e previdencia*/
	printf("\nO valor do salario liquido e de: %.2f reais", salario_liquido);
	
	return (0);
	getch ();
}

