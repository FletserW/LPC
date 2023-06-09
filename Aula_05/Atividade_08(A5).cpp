#include<stdio.h>

main()
{
    //Variables:
	int op;
    //Commands
	printf("1 - Fazer check-in\n2 - Servico de quarto\n3 - Fazer pedido\n");
	printf("Escolha uma opcao de atendimento:");
	scanf("%d",&op);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	switch(op){
		case 1:
			printf("             Check-in");
			break;
		case 2:
			printf("          Servico de quarto");
			break;
		case 3:
			printf("                Pedido");
			break;
		default:
			printf("           Opcao Invalida");
	}
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}