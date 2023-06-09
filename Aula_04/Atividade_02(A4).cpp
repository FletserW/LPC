#include<stdio.h>

main()
{
    //Variables:
    float n1,n2,r;
	int op;
    //Commands:
	printf("                   Menu de Operacaos:");
	printf("\n| 1 Adicao | 2 Subtracao | 3 Multiplicacao | 4 Divisao |");
	printf("\nEscolha uma opcao (1,2,3 ou 4) ");
	scanf("%d", &op);
	if((op >= 1)&&(op <=4)){
    	printf("Primeiro valor: ");
    	scanf("%f", &n1);
        printf("Segundo valor: ");
        scanf("%f", &n2);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("        ");
    	switch (op) {
    		case 1:
        		r = n1 + n2;
        		printf("A soma de %.1f + %.1f = %.1f",n1,n2,r);
        	    break;
    		case 2:
    		    r = n1 - n2;
        		printf("A subtracao de %.1f - %.1f = %.1f",n1,n2,r);
        	    break;
    		case 3:
    		    r = n1 * n2;
        		printf("A multiplicacao de %.1f x %.1f = %.1f",n1,n2,r);
        	    break;
    		case 4:
    		    r = n1 / n2;
        		printf("A divisao de %.1f / %.1f = %.1f",n1,n2,r);
        	    break;
    	} 
    	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	}
	else
	    printf("\nNumero nao correspondente ao menu das operacoes. Tente novamente.\n");
}