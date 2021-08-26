/*O �ndice de Massa Corporal (IMC) � uma f�rmula que indica se um adulto est� acima do peso, se est� obeso ou abaixo do peso ideal considerado saud�vel. 
A f�rmula para calcular o �ndice de Massa Corporal �: IMC = peso / (altura)2
A Organiza��o Mundial de Sa�de usa um crit�rio simples para considerar quem est� acima do peso e quem � obeso.
Valores calculados de IMC:
"	Menos de 20 : Abaixo do peso 
"	20  < IMC < 25 : Peso Normal 
"	25  < IMC < 30 : Acima do peso 
"	30  < IMC < 34 : Obeso 
"	Acima de 34: Obesidade m�rbida

Elabore um algoritmo em linguagem C, que leia o peso (em kg) e altura (em metros) e em seguida calcule o IMC e mostre qual a situa��o do adulto de acordo com os valores acima estipulados pela OMC
*/

// bibliotecas /
#include <stdio.h>
#include <stdlib.h>

// vari�veis globais /
int p;
float a, imc;

// corpo do programa /
int main ()
{
	// solicita os dados para calculo do imc /
	printf("Informe seu peso, em kg: ");
	fflush(stdin); // limpa o buffer de mem�ria do teclado /
	scanf("%i", &p);
	
	printf("\nInforme sua altura, em metros: ");
	scanf("%f", &a);
	
	// f�rmula para c�lculo do imc /
	imc = p / (a*a);
	
	
	// estrutura condicional para output dos dados inseridos pelo usu�rio /
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
