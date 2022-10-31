#include <stdio.h>
#include <stdlib.h>
 
 int main (void){
 	
 	
 	float qt_minima, qt_maxima, Estqmedio; 
 	
 	printf("Caulcular Estoque Medio de uma Peca \n");
 	printf ("\n");
 	
	printf ("Digite Quantidade Minima de Peca:" );
	
	scanf ("%f", &qt_minima);
	
	printf ("Digite Quantidade Maxima de Peca:" );
	
	scanf ("%f", &qt_maxima);

	
	Estqmedio = (qt_minima + qt_maxima )/ 2;
	
	if(Estqmedio <= 100)
	printf ("O estoque precisa ser abastecido ! \n");
	
	printf("O Estoque Medio de uma peca  :  %.2f \n", Estqmedio);
	
	else
	printf("Estoque com quantidade normal !\n");	
	
 	system("pause");
 	
 	return 0;
 }
