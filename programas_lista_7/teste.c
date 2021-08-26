#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int somaint(int N)
{
int soma=0,i;
for (i=1; i<=N; i++)
soma=soma+i;
return (soma);
}

main ()
{
int n;


printf ("Digite o valor de N: ");
scanf ("%d",&n);

printf ("Resposta e': %d\n",somaint (n));

getch();
}

