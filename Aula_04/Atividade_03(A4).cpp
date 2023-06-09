#include<stdio.h>

main()
{
    //Variables:
	int op; 
	float n1, r;
	//Commands:
	printf("                        Menu");
	printf("\n|1 - Cliente Comum | 2 - Funcionario | 3 - Cliente VIP |");
	printf("\nInforme o tipo de servico: ");
	scanf("%d", &op);
	if((op>=1)&&(op<=3)){
    	printf("Insira o valor total da compra: R$ ");
    	scanf("%f", &n1);
    	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    	switch (op) {
    		case 1:
    			printf("Tipo: Cliente comum.");
    			printf("\nDesconto: 0 porcento.");
    			printf("\nTotal: R$ %.2f",n1);
    			break;
    		case 2:
    			r = n1-((10*n1)/100); 
    			printf("Tipo: Funcionario.");
    			printf("\nDesconto: 10 porcento.");
    			printf("\nTotal: R$ %.2f",r);
    			break;
    		case 3:
    			r = n1-((5*n1)/100); 
    			printf("Tipo: Cliente VIP.");
    			printf("\nDesconto: 5 porcento.");
    			printf("\nTotal: R$ %.2f",r);
    			break;
        }
        printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    }
    else
        printf("\nCodigo invalido. Tente novamente.");
}