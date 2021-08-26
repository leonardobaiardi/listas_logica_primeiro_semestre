/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Variáveis globais*/
/*tipo dado / nome dado à variável*/
float temp_celsius;
float temp_fahrenheit;

/*Corpo do programa*/
float main()
{
	/*Solicitar um valor em Celsius*/
	printf("Insira uma temperatura em graus Celsius: ");
	fflush(stdin); 	/*limpa o buffer de memória do teclado*/
	/*Colhe o valor em Celsius e armazena em variável não inteira*/
	scanf("%f" , &temp_celsius);

	/*Fórmula de transformação Celsius em Fahrenheit*/
	temp_fahrenheit = (temp_celsius*1.8)+32;
	
	/*Printa na tela o valor convertido para Fahrenheit*/
	printf("\n\nO valor equivalente em Fahrenheit e de:	%.2f", temp_fahrenheit);
	fflush(stdin);
	
	return (0);
	getch ();
}
