#include  <stdio.h>

int main ()
{
	
	int fatorial, resultado = 1;
	
	printf ("*Permutacao Simples*\n");
	printf ("      Pn = n!\n");
	
	printf ("\nDigite o n!:");
	scanf ("%i", &fatorial);
	
	for ( ; fatorial >= 1; --fatorial)
	{
		resultado =  resultado * fatorial;
	}
	
	printf ("\nA resposta dessa permutacao simples e: %i", resultado);
	
	return 0;
}