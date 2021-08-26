/*6. Elabore um algoritmo em linguagem C, que leia 3 comprimentos de lado (A,B e C) de modo que o lado A representa o maior dos 3 lados, B � menor que A e C � o menor de todos (n�o � necess�rio fazer a ordena��o. 
Suponha que o usu�rio fa�a a entrada na ordem). 
O algoritmo dever� retornar que tipo de tri�ngulo que estes tr�s lados formam, com base nos seguintes casos: 
- se A > B+C, n�o formam tri�ngulo 
- se os tr�s lados forem iguais, ent�o o tipo � tri�ngulo equil�tero 
- se dois dos lados forem iguais, ent�o o tipo � tri�ngulo is�sceles
*/

//condi��es do exercicio
//regra de tamanhos -> lado A > lado B > lado C

//bibliotecas/
#include <stdio.h>
#include <stdlib.h>

//vari�veis globais/
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
	
	//colhe os dados para identifica��o/
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


