#include<stdio.h>

main()
{
    //Variables:
	char op;
	float re, peso;
	//Input:
	printf("M = Masculino ou F = Femenino");
	printf("\nInforme seu genero: ");
	scanf("%c", &op);
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	switch (op){
		case 'M':
		case 'm':
			re = (peso-100)*0.9;
		break;
		case 'f':
		case 'F':
			re = (peso-100)*0.85;
		break;
	}
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("        Seu peso ideal: %.1f",re);
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}