#include<stdio.h>

main()
{
    //Variables:
	int op;
	//Commands:
	printf("Informe o codigo do produto(1 a 4): ");
	scanf("%d", &op);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("        ");
	switch (op){
		case 1:
			printf("Alimento nao pericivel.");
		break;
		case 2:
			printf("Alimento pericivel.");
		break;
		case 3:
			printf("    Vestuario.");
		break;
		case 4:
			printf("      Limpeza.");
		break;
		default:							
			printf("  Opcao invalida.");
	}
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}