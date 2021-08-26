/*O Índice de Massa Corporal (IMC) é uma fórmula que indica se um adulto está acima do peso, se está obeso ou abaixo do peso ideal considerado saudável. 
A fórmula para calcular o Índice de Massa Corporal é: IMC = peso / (altura)2
A Organização Mundial de Saúde usa um critério simples para considerar quem está acima do peso e quem é obeso.
Valores calculados de IMC:
"	Menos de 20 : Abaixo do peso 
"	20  < IMC < 25 : Peso Normal 
"	25  < IMC < 30 : Acima do peso 
"	30  < IMC < 34 : Obeso 
"	Acima de 34: Obesidade mórbida

Elabore um algoritmo em linguagem C, que leia o peso (em kg) e altura (em metros) e em seguida calcule o IMC e mostre qual a situação do adulto de acordo com os valores acima estipulados pela OMC
*/

// bibliotecas /
#include <stdio.h>
#include <stdlib.h>

// variáveis globais /
int p;
float a, imc;

// corpo do programa /
int main ()
{
	// solicita os dados para calculo do imc /
	printf("Informe seu peso, em kg: ");
	fflush(stdin); // limpa o buffer de memória do teclado /
	scanf("%i", &p);
	
	printf("\nInforme sua altura, em metros: ");
	scanf("%f", &a);
	
	// fórmula para cálculo do imc /
	imc = p / (a*a);
	
	
	// estrutura condicional para output dos dados inseridos pelo usuário /
	if (imc < 20){
		printf("\n\nVoce esta abaixo do peso ideal");
		getch();
		return(0);
	}
	if (20<imc<25){
		printf("\n\nVoce esta dentro do peso normal");
		getch();
		return(0);
	}
	if (25<imc<30){
		printf("\n\nVoce esta acima do peso ideal");
		getch();
		return(0);
	}
	if (30<imc<34){
		printf("\n\nVoce esta obeso(a)");
		getch();
		return(0);
	}
	if (imc>34){
		printf("\n\nVoce esta com obesidade morbida");
		getch();
		return(0);
	}
}
