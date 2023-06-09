#include<stdio.h>

main()
{
    //Variables:
	int n1,n2,n3;
	//Commands:
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &n3);		
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	if ((n1<n2)&&(n2<n3))
		printf("      Esta em ordem crescente.");
	else
		printf("      Nao esta em ordem crescente.");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}