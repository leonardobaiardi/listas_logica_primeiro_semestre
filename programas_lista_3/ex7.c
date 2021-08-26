/*7. Elabore um algoritmo em linguagem C, que receba um símbolo de operação do usuário (+, -, / ou *) e dois números reais. 
O programa deve retornar o resultado da operação recebida sobre estes dois números.
*/

//bibliotecas/
#include <stdlib.h>
#include <stdio.h>

//variáveis globais/
float res, x, y;
char w;

//corpo do programa/
float main ()
{
	//colhe os números e o operador matemático/
	printf("\nInsira o primeiro numero real: ");
	fflush(stdin);
	scanf("%f", &x);

	printf("\nInsira o segundo numero real: ");
	fflush(stdin);
	scanf("%f", &y);
	
	printf("\nInsira o operador matematico: ");
	fflush(stdin);
	scanf("%c", &w);
	
	//estrutura condicional para uso de cada operador matemático + finalização do programa/
	if (w == '+')
	{
		res = x + y;
		printf("\nO resultado da operacao matematica e: %.2f", res);
		getch();
		return(0);
	}
	if (w == '-')
	{
		res = x - y;
		printf("\nO resultado da operacao matematica e: %.2f", res);
		getch();
		return(0);
	}
	if (w == '*')
	{
		res = x * y;
		printf("\nO resultado da operacao matematica e: %.2f", res);
		getch();
		return(0);
	}
	if (w == '/')
	{
		res = x / y;
		printf("\nO resultado da operacao matematica e: %.2f", res);
		getch();
		return(0);
	}
}
