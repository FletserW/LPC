#include<stdio.h>

main()
{
    //Variables:
	float n1,r;
	int op;
	//Commands:
	printf("     Forma de Pagamento:");
	printf("\n| 1 - A Vista | 2 - A Prazo |");
	printf("\nEscolha uma opcao (1 ou 2): ");
	scanf("%d", &op);
	if((op==1)||(op==2)){
    	printf("Digite o valor do produto: R$ ");
    	scanf("%f", &n1);
    	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    	switch (op){
    		case 1:
    			printf("Valor do Produto: R$ %.2f",n1);
    			r = n1-((10*n1)/100);
    			printf("\nDesconto: 10 porcento."); 
    			printf("\nValor Final: R$ %.2f",r);
    			break;
    		case 2:
    			printf("Valor do Produto: R$ %.2f",n1);
    			printf("\nSem desconto.");	
    			break;
        }
	}
    else{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Opcao Invalida, Tente novamente.");	
    }
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}