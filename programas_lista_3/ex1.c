#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

// variáveis globais
float n1, n2, n3;
float media;

// corpo do programa
float main ()
{
	printf("\nInsira a nota 01: ");
	fflush(stdin);
	scanf("%f", &n1);
	
	printf("\nInsira a nota 02: ");
	fflush(stdin);
	scanf("%f", &n2);
	
	printf("\nInsira a nota 03: ");
	fflush(stdin);
	scanf("%f", &n3);
	
	media=(n1+n2+n3)/3;
	
	if (media >=7){
		printf("\nPARABENS! Voce esta aprovado");
	}
	if (media >=5.0 && media < 7.0){
		printf("\nVoce esta de recuperacao");
	}
	if (media <5){
		printf("\nVoce esta REPROVADO");
	}
	
}



