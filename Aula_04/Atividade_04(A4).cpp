#include<stdio.h>

main()
{
    //Variables:
	char op;
	//Commands:
	printf("\nInforme seu genero(M ou F): "); 
	scanf("%c", &op);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("         ");
	switch (op) {
		case 'm':
		case 'M':
			printf("Genero: Masculino.");
			break;
		case 'f':
		case 'F':
			printf("Genero: Feminino.");
			break;
		default:
		printf("\n  Opcao Invalida. Tente novamente.\n");		
	} 
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}