#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

FILE * A;

int main ()
{
	A = fopen ("teste.txt", "a");
	
	fprinf(A, "=====================");
	fprinf(A, "        teste        ");
	fprinf(A, "=====================");
	
	fclose(A);
	
	return(0);
}
