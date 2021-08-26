/*
LISTA 07 - EXERCÍCIO 5

ALUNO: LEONARDO BAIARDI LOPES
PRONTUÁRIO: SP3070751
PERÍODO: NOTURNO

5) Codifique o programa em linguagem C uma função que leia um número 
não determinado de valores positivos e retorne a média aritmética desses valores.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variáveis globais */
int i=0, vet[101] = {}, somaMedia, divMedia;
float media;
char opc;

/* Protótipos de funções */
int main();
int exibeMedia();
int solicitaValores();

/* Construção das funções */
int solicitaValores(void) 
{
	do
	{
		system("cls");
		printf("\nInsira um valor positivo: ");
		fflush(stdin); scanf("%d", &vet[i]); i++;
		printf("\nDeseja inserir mais um valor?\n [NÃO = N]\n [SIM = APERTE QUALQUER OUTRA TECLA]");
		opc=getch();
	}
	while (opc != 'N' && opc != 'n');
}

int exibeMedia(void) 
{
	for(i=0; i<100 ; i++) {
		if (vet[i]!=0)
			somaMedia=somaMedia+vet[i];
			divMedia=i;
			if (vet[i] == 0)
				break;
	}	
	
	media=somaMedia/divMedia;	
	printf("\n\n Seu vetor é: ");
	for(i=0; i<100 ; i++) {
		if(vet[i] != 0)
			printf(" [%d] ", vet[i]);
			else
				break;
	}
	printf("\n A soma dos valores inseridos é: [%d]", somaMedia);
	printf("\n A quantidade de divisores é:   [%d]", divMedia);
	printf("\n A média aritmética total é:  [%.2f]", media);
}


/* Corpo do programa */
int main()
{
	setlocale(LC_ALL, "");
	
	solicitaValores();
	exibeMedia();
	
	getch();
	
	return (0);
}
