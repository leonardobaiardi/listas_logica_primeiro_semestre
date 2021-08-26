/*
LISTA 07 - EXERC�CIO 5

ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: SP3070751
PER�ODO: NOTURNO

5) Codifique o programa em linguagem C uma fun��o que leia um n�mero 
n�o determinado de valores positivos e retorne a m�dia aritm�tica desses valores.
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Vari�veis globais */
int i=0, vet[101] = {}, somaMedia, divMedia;
float media;
char opc;

/* Prot�tipos de fun��es */
int main();
int exibeMedia();
int solicitaValores();

/* Constru��o das fun��es */
int solicitaValores(void) 
{
	do
	{
		system("cls");
		printf("\nInsira um valor positivo: ");
		fflush(stdin); scanf("%d", &vet[i]); i++;
		printf("\nDeseja inserir mais um valor?\n [N�O = N]\n [SIM = APERTE QUALQUER OUTRA TECLA]");
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
	printf("\n\n Seu vetor �: ");
	for(i=0; i<100 ; i++) {
		if(vet[i] != 0)
			printf(" [%d] ", vet[i]);
			else
				break;
	}
	printf("\n A soma dos valores inseridos �: [%d]", somaMedia);
	printf("\n A quantidade de divisores �:   [%d]", divMedia);
	printf("\n A m�dia aritm�tica total �:  [%.2f]", media);
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
