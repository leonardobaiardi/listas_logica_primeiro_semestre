/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Vari�veis globais*/
/*tipo dado / nome dado � vari�vel*/
int altura;
int raio;
float volume;

/*Corpo do programa*/
int main()
{
	/*Solicitar a altura da lata de �leo*/
	printf("Digite a altura da lata de oleo: ");
	fflush(stdin); 	/*limpa o buffer de mem�ria do teclado*/
	
	/*Colhe o dado referente � informa��o da lata de �leo e armazena em vari�vel inteira*/
	scanf("%i" , &altura);

	/*Retorna o valor de altura inserido ao usu�rio*/
	printf("O valor de altura digitado foi: %.i", altura);
	fflush(stdin);
	
	/*Solicita o valor do raio*/
	printf("\n\nDigite o raio da lata de oleo: ");
	fflush(stdin);
	scanf("%i", &raio);

	/*Retorna o valor de raio inserido ao usu�rio*/
	printf("O valor de raio digitado foi: %.i", raio);
	fflush(stdin);
	
	/*F�rmula para calcular o volume da lata de �leo*/
	volume = 3.14159 * (raio*raio) * altura;
	
	/*Printa o volume calculado*/
	printf("\n\nO volume da lata de oleo, em centimetros cubicos, e de: %.2f", volume);
	fflush(stdin);
	
	return (0);
	getch ();
}
