#include<stdio.h>

main()
{
    //Variables:
    int idade;
    //Commands:
    printf("Informe sua idade: ");
    scanf("%d",&idade);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if((idade>=18)&&(idade<=67))
    	printf("Esta apto a doar sangue.");
    else
    	printf("Nao esta apto a doar.");	
}