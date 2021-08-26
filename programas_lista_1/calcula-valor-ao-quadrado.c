/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Variáveis globais*/
/*tipo dado / nome dado à variável*/
int numero;
int quadrado;

/*Corpo do programa*/
int main()
{
	/*Solicitar e colhe o número*/
	printf("Digite um numero: ");
	fflush(stdin); 	/*limpa o buffer de memória do teclado*/
	scanf("%i" , &numero);

	/*Retorna o valor elevado ao quadrado ao usuário*/
	printf("O numero digitado foi: %i", numero);
	/*Fórmula para elevar o número ao quadrado*/
	quadrado = (numero*numero);
	printf("\n\nO quadrado deste numero e: %i", quadrado);
	fflush(stdin);
	
	return (0);
	getch ();
}
