/*
LISTA 08 - LG1A1 - IFSP
ALUNO: LEONARDO BAIARDI LOPES
PRONTUÁRIO: 3070751
PERÍODO: NOTURNO

3) Para o código anterior, inclua um campo "endereco" na estrutura student. 
O endereço deve ser uma struct que contenha: Rua (String), Num (int), cidade (String) e CEP(int). 
Atualize as funções de leitura e gravação implementadas no exercício anterior.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/* Constantes */
#define N 4

/* Definição das structs*/
typedef struct endereco
{
	char rua[31], cidade[31];
	int num, cep;
} end_data;

typedef struct
{
	char name[8];
	int  eng, math, phys;
	float media;
	struct endereco end_data [N];
} student;


/* Variáveis globais */
int i;

student data [N] =
{
	{"Evandro", 82, 72, 58},
	{"Thomas",  77, 82, 79},
	{"Sabrina", 52, 62, 39},
	{"Melinda", 61, 82, 88},
};

/* Função */
float calculaMedia();
int capturaEndereco();
int imprimeEndereco();
int main(); 

/* Construção da função */
float calculaMedia()
{
	data[i].media = ( data[i].eng + data[i].math + data[i].phys ) / 3;
	return (data[i].media);
}

int capturaEndereco()
{
	for (i=0; i<N; i++){
		system("cls");
		printf("%s", data[i].name);
		printf("\nInsira a rua: ");
		fflush(stdin); gets(data[i].end_data[i].rua);
		printf("\nInsira o numero: ");
		fflush(stdin); scanf("%d", &data[i].end_data[i].num);
		printf("\nInsira a cidade: ");
		fflush(stdin); gets(data[i].end_data[i].cidade);
		printf("\nInsira o CEP: ");
		fflush(stdin); scanf("%d", &data[i].end_data[i].cep);
	}
} 

int main (void)
{
	capturaEndereco();
	system("cls");
	for (i=0; i<N; i++)
	{
		printf (" %7s\n NOTAS: Eng=%3d Math=%3d Phys=%3d MEDIA=%.2f\n Cidade: %s\n Rua: %s\n Numero: %d\n CEP: %d\n\n", 
		data[i].name, data[i].eng, data[i].math, data[i].phys, calculaMedia(), data[i].end_data[i].cidade, data[i].end_data[i].rua,
		data[i].end_data[i].num, data[i].end_data[i].cep);
	}
	
	getch();
	return(0);
}
