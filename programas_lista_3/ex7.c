/*7. Elabore um algoritmo em linguagem C, que receba um s�mbolo de opera��o do usu�rio (+, -, / ou *) e dois n�meros reais. 
O programa deve retornar o resultado da opera��o recebida sobre estes dois n�meros.
*/

//bibliotecas/
#include <stdlib.h>
#include <stdio.h>

//vari�veis globais/
float res, x, y;
char w;

//corpo do programa/
float main ()
{
	//colhe os n�meros e o operador matem�tico/
	printf("\nInsira o primeiro numero real: ");
	fflush(stdin);
	scanf("%f", &x);

	printf("\nInsira o segundo numero real: ");
	fflush(stdin);
	scanf("%f", &y);
	
	printf("\nInsira o operador matematico: ");
	fflush(stdin);
	scanf("%c", &w);
	
	//estrutura condicional para uso de cada operador matem�tico + finaliza��o do programa/
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
