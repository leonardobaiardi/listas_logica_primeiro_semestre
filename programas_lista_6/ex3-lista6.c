/*

LISTA 6 - EXERC�CIO 3 -IFSP
LEONARDO BAIARDI LOPES
SP3070751
PER�ODO NOTURNO

3. Dado um vetor de n�meros inteiros, codifique o programa em Linguagem C que: 
o exiba o vetor em ordem inversa. 
o exiba somente os n�mero pares 
o exiba somente os �mpares 
o calcule a m�dia aritm�tica de todos os n�meros 
o exiba o maior valor e sua posi��o no vetor 
o exiba o menor valor e sua posi��o no vetor 
o exiba os elementos repetidos 
o exiba os elementos n�o repetidos 
o exiba a frequ�ncia de cada elemento 

*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Constantes */
#define TAM 10

/* Vari�veis Globais */
int vetor[TAM], cont, valor, i, j;
float media=0;
char opc; 

/*Corpo do programa*/
float main ()
{
	vetor[1] = 16; 
	vetor[2] = 52; 
	vetor[3] = 0; 
	vetor[4] = 33; 
	vetor[5] = 51; 
	vetor[6] = 63; 
	vetor[7] = 73; 
	vetor[8] = 82; 
	vetor[9] = 94;
	vetor[10] = 66;
	
	printf("\n VETOR: ");
	for(cont=1 ; cont<TAM+1 ; cont++) {
		printf(" [%d] ", vetor[cont]);
	}
	printf("\n\n");
			
	setlocale(LC_ALL, "");
		
	printf("\n Escolha a op��o abaixo: ");
	printf("\n 1. Exiba o vetor em ordem inversa.");
	printf("\n 2. Exiba somente os n�meros pares.");
	printf("\n 3. Exiba somente os n�meros �mpares.");
	printf("\n 4. Calcule a m�dia aritm�tica de todos os n�meros.");
	printf("\n 5. Exiba o maior valor e sua posi��o no vetor.");
	printf("\n 6. Exiba o menor valor e sua posi��o no vetor.");
	printf("\n 7. Exiba os elementos repetidos .");
	printf("\n 8. Exiba os elementos n�o repetidos (n�o consegui fazer funcionar).");
	printf("\n 9. Exibir a frequ�ncia de cada elemento (n�o consegui fazer funcionar).\n OP��O: ");
	fflush(stdin); opc = getche();
	
		switch (opc)
		{
			case '1' :  printf("\n\n[%d], [%d], [%d], [%d], [%d], [%d], [%d], [%d], [%d], [%d]", vetor[10], vetor[9], vetor[8], vetor[7], vetor[6], vetor[5], vetor[4], vetor[3], vetor[2], vetor[1]);
						break;
		
			case '2' :  printf("\n\n");
						for (cont=0 ; cont<TAM ; cont++)
						{
							if(vetor[cont]%2==0)
							printf(" [%d]", vetor[cont]);
						} 
						break;
					
			case '3' :  printf("\n\n");
						 for (cont=0 ; cont<TAM ; cont++)
						{
							if(vetor[cont]%2!=0)
							printf(" [%d]", vetor[cont]);
						}
						break;
						
					
			case '4' :  printf("\n\n");
						media = (vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5] + vetor[6] + vetor[7] + vetor[8] + vetor[9] + vetor[10])/ TAM ;
						printf("%.2f", media);
						break;
						
			case '5' :  printf("\n\n");
						if(vetor[10] > vetor[9] && vetor[10] > vetor[9] && vetor[10] > vetor[8] && vetor[10] > vetor[7] && vetor[10] > vetor[6] && vetor[10] > vetor[5] && vetor[10] > vetor[4] && vetor[10] > vetor[3] && vetor[10] > vetor[2] && vetor[10] > vetor[1])
						printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[10], 10);
						else
							if(vetor[9] > vetor[10] && vetor[9] > vetor[8] && vetor[9] > vetor[7] && vetor[9] > vetor[6] && vetor[9] > vetor[5] && vetor[9] > vetor[4] && vetor[9] > vetor[3] && vetor[9] > vetor[2] && vetor[9] > vetor[1])
							printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[9], 9);
							else
								if(vetor[8] > vetor[10] && vetor[8] > vetor[9] && vetor[8] > vetor[7] && vetor[8] > vetor[6] && vetor[8] > vetor[5] && vetor[8] > vetor[4] && vetor[8] > vetor[3] && vetor[8] > vetor[2] && vetor[8] > vetor[1])
								printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[8], 8);
								else
									if(vetor[7] > vetor[10] && vetor[7] > vetor[9] && vetor[7] > vetor[6] && vetor[7] > vetor[5] && vetor[7] > vetor[4] && vetor[7] > vetor[3] && vetor[7] > vetor[2] && vetor[7] > vetor[1])
									printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[7], 7);
									else
										if(vetor[6] > vetor[10] && vetor[6] > vetor[9] && vetor[6] > vetor[7] && vetor[6] > vetor[5] && vetor[6] > vetor[4] && vetor[6] > vetor[3] && vetor[6] > vetor[2] && vetor[6] > vetor[1])
										printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[6], 6);
										else
											if(vetor[5] > vetor[10] && vetor[5] > vetor[9] && vetor[5] > vetor[7] && vetor[5] > vetor[6] && vetor[5] > vetor[4] && vetor[5] > vetor[3] && vetor[5] > vetor[2] && vetor[5] > vetor[1])
											printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[5], 5);
											else
												if(vetor[4] > vetor[10] && vetor[4] > vetor[9] && vetor[4] > vetor[7] && vetor[4] > vetor[6] && vetor[4] > vetor[5] && vetor[4] > vetor[3] && vetor[4] > vetor[2] && vetor[4] > vetor[1])
												printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[4], 4);
												else
													if(vetor[3] > vetor[10] && vetor[3] > vetor[9] && vetor[3] > vetor[7] && vetor[3] > vetor[6] && vetor[3] > vetor[5] && vetor[3] > vetor[4] && vetor[3] > vetor[2] && vetor[3] > vetor[1])
													printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[3], 3);
													else
														if(vetor[2] > vetor[10] && vetor[2] > vetor[9] && vetor[2] > vetor [8] && vetor[2] > vetor[7] && vetor[2] > vetor[6] && vetor[2] > vetor[5] && vetor[2] > vetor[4] && vetor[2] > vetor[1])
														printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[2], 2);
														else
															if(vetor[1] > vetor[10] && vetor[1] > vetor[9] && vetor[1] > vetor[7] && vetor[1] > vetor[6] && vetor[1] > vetor[5] && vetor[1] > vetor[4] && vetor[1] > vetor[3] && vetor[1] > vetor[2])
															printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[1], 1);
															break;
															
			case '6' :  printf("\n\n");
						if(vetor[10] < vetor[9] && vetor[10] < vetor[9] && vetor[10] < vetor[8] && vetor[10] < vetor[7] && vetor[10] < vetor[6] && vetor[10] < vetor[5] && vetor[10] < vetor[4] && vetor[10] < vetor[3] && vetor[10] < vetor[2] && vetor[10] < vetor[1])
						printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[10], 10);
						else
							if(vetor[9] < vetor[10] && vetor[9] < vetor[8] && vetor[9] < vetor[7] && vetor[9] < vetor[6] && vetor[9] < vetor[5] && vetor[9] < vetor[4] && vetor[9] < vetor[3] && vetor[9] < vetor[2] && vetor[9] < vetor[1])
							printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[9], 9);
							else
								if(vetor[8] < vetor[10] && vetor[8] < vetor[9] && vetor[8] < vetor[7] && vetor[8] < vetor[6] && vetor[8] < vetor[5] && vetor[8] < vetor[4] && vetor[8] < vetor[3] && vetor[8] < vetor[2] && vetor[8] < vetor[1])
								printf(" O maior n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[8], 8);
								else
									if(vetor[7] < vetor[10] && vetor[7] < vetor[9] && vetor[7] < vetor[6] && vetor[7] < vetor[5] && vetor[7] < vetor[4] && vetor[7] < vetor[3] && vetor[7] < vetor[2] && vetor[7] < vetor[1])
									printf(" O menor n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[7], 7);
									else
										if(vetor[6] < vetor[10] && vetor[6] < vetor[9] && vetor[6] < vetor[7] && vetor[6] < vetor[5] && vetor[6] < vetor[4] && vetor[6] < vetor[3] && vetor[6] < vetor[2] && vetor[6] < vetor[1])
										printf(" O menor n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[6], 6);
										else
											if(vetor[5] < vetor[10] && vetor[5] < vetor[9] && vetor[5] < vetor[7] && vetor[5] < vetor[6] && vetor[5] < vetor[4] && vetor[5] < vetor[3] && vetor[5] < vetor[2] && vetor[5] < vetor[1])
											printf(" O menor n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[5], 5);
											else
												if(vetor[4] < vetor[10] && vetor[4] < vetor[9] && vetor[4] < vetor[7] && vetor[4] < vetor[6] && vetor[4] < vetor[5] && vetor[4] < vetor[3] && vetor[4] < vetor[2] && vetor[4] < vetor[1])
												printf(" O menor n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[4], 4);
												else
													if(vetor[3] < vetor[10] && vetor[3] < vetor[9] && vetor[3] < vetor[7] && vetor[3] < vetor[6] && vetor[3] < vetor[5] && vetor[3] < vetor[4] && vetor[3] < vetor[2] && vetor[3] < vetor[1])
													printf(" O menor n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[3], 3);
													else
														if(vetor[2] < vetor[10] && vetor[2] < vetor[9] && vetor[2] < vetor [8] && vetor[2] < vetor[7] && vetor[2] < vetor[6] && vetor[2] < vetor[5] && vetor[2] < vetor[4] && vetor[2] < vetor[1])
														printf(" O menor n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[2], 2);
														else
															if(vetor[1] < vetor[10] && vetor[1] < vetor[9] && vetor[1] < vetor[7] && vetor[1] < vetor[6] && vetor[1] < vetor[5] && vetor[1] < vetor[4] && vetor[1] < vetor[3] && vetor[1] < vetor[2])
															printf(" O menor n�mero do vetor �: [%d]\n Sua posi��o no vetor �: [%d]", vetor[1], 1);  
															break;
														
			case '7' :  printf("\n\n");
						 for (i=0 ; i<TAM ; i++) {
							for (j=0 ; j<TAM ; j++) {
								if(i != j) {
									if (vetor[i] == vetor[j]) {
										printf(" Valor repetido: [%d], nas posi��es %d e %d\n", vetor[i], i, j);
									}
								}
							}
						}
						break;
						
			case '8' :  printf("\n\n");
						 for (i=0 ; i<TAM ; i++) {
							for (j=0 ; j<TAM ; j++) {
								if(i != j) {
									if (vetor[i] = vetor[j]) {
										printf(" Valor repetido: [%d], nas posi��es %d e %d\n", vetor[i], i, j);
									}
								}
							}
						}
						break;
						
		/*	case '9' : */
		}
	
	return(0);
}






