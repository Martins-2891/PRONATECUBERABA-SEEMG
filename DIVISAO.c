#include <stdio.h>
#include <stdlib.h>
 
 int main (void){
 	
 	float num1, num2, dividir;
 	
 	printf ("Digite o primeiro numero : \n ");
	
	scanf ("%f",&num1);
	
	printf ("Digite o segundo numero : \n ");
	
	scanf ("%f", &num2);
	
	if (num2 > 0)
	
	{
	dividir = num1 / num2;
	
	printf("O resultado da divisao e : %.2f \n",dividir);	
				

	}
	
	else 
	printf (" O denominador devev ser maior que 0 ! \n");

	
 	system ("pause");
 	
 	return 0;
 	
 	
 }
