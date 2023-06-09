#include<stdio.h>

main()
{
    //Variables:
	char le;	
	//input:
	printf("Digite uma letra: ");
	scanf("%c", &le);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	switch (le){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':	
			printf("                Vogal");
		break;
			default:
			printf("              Consoante"); 		
	}
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}