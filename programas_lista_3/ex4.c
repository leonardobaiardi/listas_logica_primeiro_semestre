/*Elabore um algoritmo em linguagem C, que calcule e retorne o Gasto Energético Basal (GEB), utilizando as seguintes fórmulas:
-para os homens: GEB = 66.47 + (13.75 * PC) + (5 * Alt) - (6.76 * I); 
-para as mulheres: GEB = 655.1 + (9.56 * PC) + (1.85 * Alt) - (4.67 * I); 
Onde: 
PC- Peso Corporal em kg 
Alt- altura em cm e 
I- Idade em anos. 
*/

// bibliotecas /
#include <stdlib.h>
#include <stdio.h>

// variáveis globais /
int I, Alt, gen;
float PC, GEBh, GEBm;

// corpo do programa /
float main ()
{
	
	// interface 
	printf("================================================================");
	printf("\n               CALCULADORA DE GASTO ENERGETICO BASAL            ");
	printf("\n================================================================");
	printf("\n\nGEB e a quantidade minima de energia (em kcal) \nnecessaria para que nosso corpo mantenha seus processos vitais \nem funcionamento, como a respiracao, a circulacao, o metabolismo\ncelular e a conservacao de temperatura corporal");
	printf("\n\n       PARA CONTINUAR, INSIRA 1 CASO VOCE SEJA HOMEM        ");
	printf("\n         OU ENTAO, INSIRA 0 CASO VOCE SEJA MULHER        ");
	fflush(stdin);
	printf("\n\nInsira aqui: ");
	scanf("%i", &gen);
	
		if (gen != 1 && gen != 0){
			printf("ERRO: VALOR INVALIDO");
			getch();
			exit(0);
		}
	
	// colhe os dados necessarios para o cálculo de GEB/
	printf("Insira seu peso corporal, em kgs: ");
	scanf("%f", &PC);
	
	printf("Insira sua altura, em centimetros: ");
	scanf("%i", &Alt);
	
	printf("Insira sua idade, em anos: ");
	scanf("%i", &I);
	
		if (gen == 1)
		{
			GEBh = 66.47 + (13.75 * PC) + (5 * Alt) - (6.76 * I);
			printf("********************************************");
			printf("\n\nSeu gasto energetico basal e: %.2f", GEBh);
		}
		if (gen == 0)
		{
			GEBm = 65.51 + (9.56 * PC) + (1.85 * Alt) - (4.67 * I);
			printf("********************************************");
			printf("\n\nSeu gasto energetico basal e: %.2f", GEBm);
		}
			
	getch();
	return(0);
}
