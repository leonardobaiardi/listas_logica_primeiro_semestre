/*6. Elabore um algoritmo em linguagem C, que leia 3 comprimentos de lado (A,B e C) de modo que o lado A representa o maior dos 3 lados, B é menor que A e C é o menor de todos (não é necessário fazer a ordenação. 
Suponha que o usuário faça a entrada na ordem). 
O algoritmo deverá retornar que tipo de triângulo que estes três lados formam, com base nos seguintes casos: 
- se A > B+C, não formam triângulo 
- se os três lados forem iguais, então o tipo é triângulo equilátero 
- se dois dos lados forem iguais, então o tipo é triângulo isósceles
*/

//condições do exercicio
//regra de tamanhos -> lado A > lado B > lado C

//bibliotecas/
#include <stdio.h>
#include <stdlib.h>

//variáveis globais/
int l1, l2, l3;

//corpo do programa/
int main ()
{
	//interface/
	printf("\n");
	printf("             /\\              \n ");
	printf("           /  \\             \n");
	printf("           /    \\            \n ");
	printf("         / ;-)  \\           \n ");
	printf("        /________\\          \n ");
	printf("\n IDENTIFICADOR DE TRIANGULOS LTDA");
	printf("\n===================================");
	
	//colhe os dados para identificação/
	printf("\nInsira o lado A: ");
	scanf("%i", &l1);
	
	printf("\nInsira o lado B: ");
	scanf("%i", &l2);
	
	printf("\nInsira o lado C: ");
	scanf("%i", &l3);
	
	if (l1>(l2+l3)){
		printf("\nERRO: TRIANGULO IMPOSSIVEL, TENTE NOVAMENTE");
		getch();
		exit(0);
	}
	
	if (l1==l2 && l1==l3){
		printf("\nESSE TRIANGULO E EQUILATERO!");
		getch();
		return(0);
	}
	
	if (l2==l3 && l1 != l2 || l1==l3 && l2!=l1){
		printf("\nESSE TRIANGULO E ISOSCELES!");
		getch();
		return(0);
	}
	
	if (l1!=l2 && l2!=l3 && l1!=l3){
		printf("\nESSE TRIANGULO E ESCALENO");
		getch();
		return(0);
	}
}


