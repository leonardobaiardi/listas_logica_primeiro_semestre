/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Vari�veis globais*/
/*tipo dado / nome dado � vari�vel*/
int numero;
int quadrado;

/*Corpo do programa*/
int main()
{
	/*Solicitar e colhe o n�mero*/
	printf("Digite um numero: ");
	fflush(stdin); 	/*limpa o buffer de mem�ria do teclado*/
	scanf("%i" , &numero);

	/*Retorna o valor elevado ao quadrado ao usu�rio*/
	printf("O numero digitado foi: %i", numero);
	/*F�rmula para elevar o n�mero ao quadrado*/
	quadrado = (numero*numero);
	printf("\n\nO quadrado deste numero e: %i", quadrado);
	fflush(stdin);
	
	return (0);
	getch ();
}
