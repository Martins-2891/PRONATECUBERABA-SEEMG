#include <stdio.h>
#include <stdlib.h>
 
 int main (void){
 	
 	int dias, opcao;
 	
 	opcao = 1;
 	
 	while (opcao ==1){
	 
 	
 	printf ("Digite o di da semana :\n");
 	
 	scanf("%d",&dias );
 	
 	switch (dias){
	 
 	case 1:
	 	
 	printf ("Dia da semana %d - DOMINGO \n ", dias);
 	break;
 	
 	case 2:
 		
 	printf ("Dia da semana %d - SEGUNDA-FEIRA \n ", dias);
 	break;
 	
 	case 3:
 		
 	printf ("Dia da semana %d - TER?A-FEIRA \n ", dias);
 	break;
 	
	case 4:
		
 	printf ("Dia da semana %d - QUARTA-FEIRA \n ", dias);
	break;
	 
	case 5:
		
 	printf ("Dia da semana %d - QUINTA-FEIRA \n ", dias);
	break;
	 
	case 6:
		
 	printf ("Dia da semana %d - SEXTA-FEIRA \n ", dias);
	break;
	 
	case 7:
		
 	printf ("Dia da semana %d - SABADO \n ", dias);
	break;
	 
	default:    
 	
 	print ("Nao e dia da semana! \n")
 	break;
	 }
	 
	    printf ("\n");
	    
	    printf ("tecle 1 para continuar ou qualquer numero para sair");
	    scanf ("%d",&opcao);
	    
		
		if (opcao ==1)
	    system "cls";

 
 		system("pause");
 	
 	return 0;
 }	
