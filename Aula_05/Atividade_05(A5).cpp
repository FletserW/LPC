#include<stdio.h>

main()
{
    //Variables:
	int n1,n2;
	//Commands:
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	if (n1==n2) 
		printf("       Os numeros sao iguais.");
	else
		printf("      Os numeros sao diferentes.");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}