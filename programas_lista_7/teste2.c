/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* global variables */
int i, n, soma=0;

/* functions construction */
int somaInt (void);
int main ();

/* functions */
int somaInt ()
{
	for(i=0 ; i<=n ; i++) { 
		soma=soma+i;
	}
	return soma;
}

/* algorithm */
int main()
{
	printf("\nINPUT: ");
	fflush(stdin); scanf("%d", &n);
	
	somaInt();
	
	printf("TOTAL SUM: %d", soma);
	
	getch();
	return 0;
}
