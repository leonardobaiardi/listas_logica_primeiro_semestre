/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Variáveis globais*/
/*tipo dado / nome dado à variável*/ 
int ano_nasc;
int ano_atual;
int idade;
int idade_em_meses;
int idade_em_dias;
int idade_em_semanas;

int main()
{
	/*Armazena o ano de nascimento do usuário*/ 
	printf("Digite o seu ano de nascimento: ");
	fflush(stdin);
	scanf("%i", &ano_nasc);
	
	/*Faz o cálculo da idade atual*/
	ano_atual = 2021;
	idade = ano_atual - ano_nasc;
	printf("==============================\n  Sua idade em anos e de:  %i\n==============================", idade);
	fflush(stdin);
	
	/*Faz o cálculo e printa sua idade atual em meses*/
	idade_em_meses = idade*12;
	printf("\n  Sua idade em meses e de: %i\n==============================", idade_em_meses);
	fflush(stdin);	
	
	/*Faz o cálculo e printa sua idade atual em dias*/
	idade_em_dias = idade*365;
	printf("\n  Sua idade em dias e de: %i\n==============================", idade_em_dias);
	fflush(stdin);
		
	/*Faz o cálculo e printa sua idade em semanas*/
	idade_em_semanas = idade*52;
	printf("\n  Sua idade em semanas e de: %i\n==============================", idade_em_semanas);
	fflush(stdin);
		
	return(0);
	getch();
	
}


