/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h> /*Necessária para operação matemática de potenciação*/

/*Variáveis globais*/
/*tipo dado / nome dado à variável*/
int base;
int expoente;
int potencia;

/*Corpo do programa*/
int main()
{
	/*Solicitar a base e colhe a base e armazena em variável inteira*/
	printf("Insira a base numerica: ");
	fflush(stdin); 	/*limpa o buffer de memória do teclado*/
	scanf("%i" , &base);
	
	printf("Insira o expoente: ");
	scanf("%i", &expoente);
	
	/*Fórmula para calcular o quadrado do número*/
	potencia = pow(base,expoente); /*Eleva a base ao expoente*/
	
	/*Retorna o quadrado do número inserido e printa na tela*/
	printf("\n\nO quadrado deste numero e: %i", potencia);
	fflush(stdin);
	
	return (0);
	getch ();
}

