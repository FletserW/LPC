#include<stdio.h>

main(){
	//Variables:
	float txnatal,txmort,nasce,hab,mort;
	int op;
	//Commands:
	printf("############ Menu #############");
	printf("\n1 - Calcular Taxa de Natalidade\n2 - Calcular Taxa de Mortalidade");
	printf("\nEscolha uma opcao(1 ou 2): ");
	scanf("%d", &op);
	switch(op){
		case 1:
			printf("Informe o numero de natalidade: ");
			scanf("%f", &nasce);
			printf("Informe o numero de habitantes: ");
			scanf("%f", &hab);
			txnatal = (nasce*100)/hab;
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
			printf("    Taxa de natalidade: %.2f",txnatal);
		    break;
		case 2:
			printf("\nInforme o numero de mortes: ");
			scanf("%f", &mort);
			printf("Informe o numero de habitantes: ");
			scanf("%f", &hab);
			txmort = (mort*100)/hab;
			printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
			printf("    Taxa de mortalidade: %.2f",txmort);
		    break;
		default:
		printf("        Opcao invalidade.");		
	}
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}
