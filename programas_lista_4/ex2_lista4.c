/*
ALUNO: LEONARDO BAIARDI LOPES

PRONTUÁRIO: SP3070751

PERÍODO: NOTURNO

EXERCÍCIO: 1
*/

/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Variáveis*/
float nota;

/*Corpo do programa*/
float main ()
{			
	while (1) /* 0 <= nota <= 10*/
	{
		system ("cls");
		system("MODE con cols=25 lines=3");
		system("color e0");
		nota = 0;
		printf("\nDigite a nota: "); fflush(stdin); scanf("%f", &nota);		
				
		if (nota>10){
			system ("cls");
			system("MODE con cols=36 lines=3");
			system("color 4f");				
			printf("\n Voc%c n%co digitou uma nota v%clida!", 136, 198, 160);
			getch();
			}
			else {	
				system ("cls");
				system("MODE con cols=25 lines=3");
				system("color e0");
				printf("Digite a nota: %.2f", nota);
				printf("\n\nNota [%.2f] digitada.", nota);
				getch();
				exit(0);
				}			
		
		}
	return (0);
}



