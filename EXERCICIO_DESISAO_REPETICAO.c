#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
 
 int main (void){
 	
 		setlocale(LC_ALL,"Portuguese");
 	
 		int vescolha;
 		
 		char opcao = 'S';
 	
 		float num1, num2, vresultado;
 		
 		while(opcao == 'S'){
				 
		  		
 		printf ("Digite a opcao que você deseja \n");
 		printf("\n");
 		printf(" Digite (1) para ADICÃO \n");
        printf(" Digite (2) para SUBTRACÃO \n");
		printf(" Digite (3) para MUTIPLICACÃO \n");
		printf(" Digite (4) para DIVISÃO \n");
		printf(" Digite (0) para sair \n" );
		printf("\n");
		printf(" Qual opcões você deseja : ");
		
		scanf("%d", &vescolha); 
		
		switch (vescolha){
		 
	 	case 1:	
	 	printf("Digite primeiro numero para somar  : ");
	 	scanf("%f", &num1);
	 	printf("Digite segundo numero para somar : ");
	 	scanf("%f", &num2);
	 	vresultado = num1 + num2;
	 	printf("resultado : %.2f", vresultado);
	 	printf("\n\n");
	 	break;
	 	
	 	case 2:
	 		printf("Digite primeiro numero para subitrair : ");
	 	scanf("%f", &num1);
	 	printf("Digite segundo numero para subitrair : ");
	 	scanf("%f", &num2);
	 	vresultado = num1 - num2;
	 	printf("resultado : %.2f", vresultado);
	 	printf("\n\n");
	 
	 	break;
	 	
	 	case 3:
	 		printf("Digite primeiro numero para multiplicar : ");
	 	scanf("%f", &num1);
	 	printf("Digite segundo numero para multiplicar : ");
	 	scanf("%f", &num2);
	 	vresultado = num1 * num2;
	 	printf("resultado : %.2f", vresultado);
	 	printf("\n\n");
	 
	 	break;
	 	
		case 4:printf("Digite primeiro numero para dividir : ");
	 	scanf("%f", &num1);
	 	printf("Digite segundo numero para dividir : ");
	 	scanf("%f", &num2);
	 	
	 	while(num2<= 0)
	 	{
	 		printf(" Digite segundo numero maior que 0 :");
			 scanf("%f", &num2);	
	 		
		 }
	 	
	 	
	 	vresultado = num1 / num2;
	 	printf("resultado : %.2f", vresultado);
	 	printf("\n\n");
	 
		break;
		 
		case 0:
			exit(0);
	 
		break;
		 	 
		default:
		printf("Digite número de 0 a 4 \n\n "); 
		    
	 	
	 	break;
	 	
	
	 }	 
	 
	printf("Deseja continuar : S/n ");
	scanf(" %c", &opcao);
	if(opcao== 'S')
	system("cls");
	else
	exit(0); 		
		 
}
 	system("pause");
 	
 	return 0;
 	
 }
 
 
