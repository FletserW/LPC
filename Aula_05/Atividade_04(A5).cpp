#include<stdio.h>

main()
{
    //Variables:
	int inter, gremio;
	//Commands:
	printf("Informe o placar:\n");
	printf("Inter: ");
	scanf("%d", &inter);
	printf("Gremio: ");
	scanf("%d", &gremio);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	if (inter>gremio)
		printf("        Vitoria para o Inter.");
	else
		if (gremio>inter)
			printf("        Vitoria para o gremio.");
		else
			printf("                Empate");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}