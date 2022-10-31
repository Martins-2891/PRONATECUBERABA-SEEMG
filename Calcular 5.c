#include <stdio.h>
#include <stdlib.h>
 
 int main (void){
 	
 	int codigop;
 	float valorp, Vtotal, quantp; 
 	
 	printf("Caulcular Valor Total das Pecas \n");
 	printf ("\n");
 	
 	printf ("Digite o codigo da peca :  ");
	
	scanf ("%d",&codigop);
	
	printf ("Digite valor da peca :  ");
	
	scanf ("%f",&valorp);
	
	printf ("Digite a quantp de peca : ");
	
	scanf ("%f",&quantp);
	 
	if (codigop > 0);
	
	{
	Vtotal = quantp * valorp;
	
	printf("O valor total de peca  : R$ %.2f \n ", Vtotal);
	}
	
	
    printf ("\n");
	
 	system ("pause");
 	
 	return 0;
 	
 	
 }
