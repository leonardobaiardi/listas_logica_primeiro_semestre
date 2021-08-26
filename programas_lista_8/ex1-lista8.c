/*
LISTA 08 - LG1A1 - IFSP
ALUNO: LEONARDO BAIARDI LOPES
PRONTU�RIO: 3070751
PER�ODO: NOTURNO

EX.1) Abaixo voc� encontra um c�digo que representa alguns dados salvos em uma estrutura. 
	  Programe o c�digo, verifique se ele compila e funciona adequadamente. Depois disso, 
	  explique com suas palavras o que � feito em cada etapa do c�digo.
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
O c�digo funciona adequadamente. 

Passo 1) Importa-se a biblioteca <stdio.h> para o uso de fun��es da biblioteca padr�o C, como por exemplo, a fun��o printf.

Passo 2) Define-se uma constante N destinada a definir o tamanho da estrutura que ser� criada, para facilitar a escalabilidade do c�digo.

Passo 3) A partir da necessidade do projeto, cria-se uma estrutura que possa armazenar uma string de at� 20 caract�res, bem como tr�s 
		 v�riaveis num�ricas inteiras.
		 
Passo 4) No caso deste exerc�cio, os dados j� s�o pr�-definidos, portanto apos a estrutura ser criada ("student data[N]"), ela ent�o � 
		 preenchida com os dados j� conhecidos.
		 
Passo 5) A fun��o "int main (void)" � criada, e dentro dela � definida uma vari�vel inteira "i" para ser utilizada como contador de um 
		 looping do tipo "for", com objetivo de acessar os dados indexados dentro da estrutura "student data[N]".
		 
Passo 6) Ao executar o looping, os dados indexados na estrutura "student data[N]" s�o acessados e em seguida, s�o impressos com o uso da
		 fun��o "prinf" no emulador de terminal.
		 
Passo 7) Ap�s finalizado o looping, a fun��o int main (void) returna o valor 0 e o programa encerra.
*/



