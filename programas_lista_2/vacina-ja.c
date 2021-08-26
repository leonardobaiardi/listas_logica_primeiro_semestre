/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*Variáveis globais*/
int dia_vacina_d1;
int mes_vacina_d1;
int ano_vacina_d1;
int dia_vacina_d2;
int mes_vacina_d2;
int ano_vacina_d2;
FILE *A;

/*

Fórmula para encontrar a data da segunda dose

	dia_vacina_d2 = dia_vacina_d1;
    mes_vacina_d2 = mes_vacina_d1 + 1;
    ano_vacina_d2 = ano_vacina_d1;
		
*/

/*Corpo do programa*/
int main ()
{
	printf("\nInsira o DIA que voce tomou a primeira dose: ");
	fflush(stdin);
	scanf("%i", &dia_vacina_d1);
	
	printf("\nInsira o MES que voce tomou a primeira dose: ");
	fflush(stdin);
	scanf("%i", &mes_vacina_d1);
	
	printf("\nInsira o ANO que voce tomou a primeira dose: ");
	fflush(stdin);
	scanf("%i", &ano_vacina_d1);
	
	/*Fórmula para cálculo de data da 2ª dose*/
	dia_vacina_d2 = dia_vacina_d1;
    mes_vacina_d2 = mes_vacina_d1 + 1;
    ano_vacina_d2 = ano_vacina_d1;
	
	printf("-----------------------------------\n");
	printf("             VACINA JA             \n");
	printf("-----------------------------------\n");
	printf("\n\n   Paciente: Richard Starkey");
	printf("\n   CPF: 11111111122");
	printf("\n   Vacina: Sputnik V - Gmaleya");
	printf("\n\n   Data da 1a dose: %i/%i/%i", dia_vacina_d1, mes_vacina_d1, ano_vacina_d1);
	printf("\n   Data da 2a dose: %i/%i/%i\n", dia_vacina_d2, mes_vacina_d2, ano_vacina_d2);
	printf("\n-----------------------------------");
	
	/*Abre o arquivo*/
	A = fopen("COMPROVANTE_RICHARD_STARKEY.TXT", "a");
	
	/*Grava informações no arquivo*/
	fprintf(A, "-----------------------------------\n");
	fprintf(A, "           VACINA JA               \n");
	fprintf(A, "-----------------------------------\n");
	fprintf(A, "\n   Paciente: Richard Starkey");
	fprintf(A, "\n   CPF: 11111111192");
	fprintf(A, "\n   Vacina: Sputnik V - Gmaleya");
	fprintf(A, "\n\n Data da 1a dose: %i/%i/%i", dia_vacina_d1, mes_vacina_d1, ano_vacina_d1);
	fprintf(A, "\n   Data da 2a dose: %i/%i/%i", dia_vacina_d2, mes_vacina_d2, ano_vacina_d2);
	fprintf(A, "\n-----------------------------------");
	
	/*Fecha o arquivo*/
	fclose(A);
	
	/*Finaliza o programa*/
	return (0);
	
}
