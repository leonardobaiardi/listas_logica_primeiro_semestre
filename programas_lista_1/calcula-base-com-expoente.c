/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h> /*Necess�ria para opera��o matem�tica de potencia��o*/

/*Vari�veis globais*/
/*tipo dado / nome dado � vari�vel*/
int base;
int expoente;
int potencia;

/*Corpo do programa*/
int main()
{
	/*Solicitar a base e colhe a base e armazena em vari�vel inteira*/
	printf("Insira a base numerica: ");
	fflush(stdin); 	/*limpa o buffer de mem�ria do teclado*/
	scanf("%i" , &base);
	
	printf("Insira o expoente: ");
	scanf("%i", &expoente);
	
	/*F�rmula para calcular o quadrado do n�mero*/
	potencia = pow(base,expoente); /*Eleva a base ao expoente*/
	
	/*Retorna o quadrado do n�mero inserido e printa na tela*/
	printf("\n\nO quadrado deste numero e: %i", potencia);
	fflush(stdin);
	
	return (0);
	getch ();
}

