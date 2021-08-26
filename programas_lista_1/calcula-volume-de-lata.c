/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Variáveis globais*/
/*tipo dado / nome dado à variável*/
int altura;
int raio;
float volume;

/*Corpo do programa*/
int main()
{
	/*Solicitar a altura da lata de óleo*/
	printf("Digite a altura da lata de oleo: ");
	fflush(stdin); 	/*limpa o buffer de memória do teclado*/
	
	/*Colhe o dado referente à informação da lata de óleo e armazena em variável inteira*/
	scanf("%i" , &altura);

	/*Retorna o valor de altura inserido ao usuário*/
	printf("O valor de altura digitado foi: %.i", altura);
	fflush(stdin);
	
	/*Solicita o valor do raio*/
	printf("\n\nDigite o raio da lata de oleo: ");
	fflush(stdin);
	scanf("%i", &raio);

	/*Retorna o valor de raio inserido ao usuário*/
	printf("O valor de raio digitado foi: %.i", raio);
	fflush(stdin);
	
	/*Fórmula para calcular o volume da lata de óleo*/
	volume = 3.14159 * (raio*raio) * altura;
	
	/*Printa o volume calculado*/
	printf("\n\nO volume da lata de oleo, em centimetros cubicos, e de: %.2f", volume);
	fflush(stdin);
	
	return (0);
	getch ();
}
