#include<stdio.h>

main()
{
    //Variables:
	int idade;
	//Commands:
	printf("Informe a idade: ");
	scanf("%d", &idade);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("        ");
	if ((idade>=16)&&(idade<=17)) 
		printf("Eleitor(a) facultativo.");
	else
		if ((idade>=18)&&(idade<=65))
		printf("Eleitor(a) obrigatorio");
		else
			if ((idade>65))
				printf("Eleitor(a) dispensado(a).");
			else
			printf("Invalido.");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}