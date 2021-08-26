/*
LISTA 08 - LG1A1 - IFSP
ALUNO: LEONARDO BAIARDI LOPES
PRONTUÁRIO: 3070751
PERÍODO: NOTURNO

EX.1) Abaixo você encontra um código que representa alguns dados salvos em uma estrutura. 
	  Programe o código, verifique se ele compila e funciona adequadamente. Depois disso, 
	  explique com suas palavras o que é feito em cada etapa do código.
*/

#include <stdio.h>
#define N 4

typedef struct 
{
	char name [20];
	int eng, math, phys;
}student;

student data [N] =
{
	{"Evandro", 82, 72, 58 },
	{"Thomas",  77, 82, 79 },
	{"Sabrina", 52, 62, 39 },
	{"Melinda", 61, 82, 88 },
};

int main (void)
{
	int i;
	for (i=0; i<N; i++)
	{
		printf ("%7s: Eng = %3d Math =%3d Phys = %3d\n", data[i].name, data[i].eng, data[i].math, data[i].phys);
	}
	
	return(0);
}

/*
RESPOSTA:
O código funciona adequadamente. 

Passo 1) Importa-se a biblioteca <stdio.h> para o uso de funções da biblioteca padrão C, como por exemplo, a função printf.

Passo 2) Define-se uma constante N destinada a definir o tamanho da estrutura que será criada, para facilitar a escalabilidade do código.

Passo 3) A partir da necessidade do projeto, cria-se uma estrutura que possa armazenar uma string de até 20 caractéres, bem como três 
		 váriaveis numéricas inteiras.
		 
Passo 4) No caso deste exercício, os dados já são pré-definidos, portanto apos a estrutura ser criada ("student data[N]"), ela então é 
		 preenchida com os dados já conhecidos.
		 
Passo 5) A função "int main (void)" é criada, e dentro dela é definida uma variável inteira "i" para ser utilizada como contador de um 
		 looping do tipo "for", com objetivo de acessar os dados indexados dentro da estrutura "student data[N]".
		 
Passo 6) Ao executar o looping, os dados indexados na estrutura "student data[N]" são acessados e em seguida, são impressos com o uso da
		 função "prinf" no emulador de terminal.
		 
Passo 7) Após finalizado o looping, a função int main (void) returna o valor 0 e o programa encerra.
*/



