#include<stdio.h>

main()
{
    //Variables:
	float n1,n2,media, faltou;
    //Commands:
    printf("Informe as notas do aluno:\n");
    printf("Nota1: ");
    scanf("%f",&n1);	
    printf("Nota2: ");
    scanf("%f",&n2);	
    media = (n1+n2)/2;
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Sua media: %.1f\n",media);
    if(media >= 7)
    	printf("Aprovado");
    else{
    	printf("Reprovado");
    	faltou = (7 - media)*2;
    	printf("\nFaltou: %.1f pontos",faltou);
    }
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");
}