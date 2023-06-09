#include<stdio.h>

main()
{
    //Variables:
    float n1,n2,n3,media;
    //Commands
    printf("Informe as notas do aluno:\n");
    printf("Nota1: ");
    scanf("%f",&n1);	
    printf("Nota2: ");
    scanf("%f",&n2);	
    printf("Nota3: ");
    scanf("%f",&n3);
    printf("=-=-=-=-=-=-=-=-=-=---=\n");
    media = (n1+n2+n3)/3;
    printf("Sua media: %.1f\n",media);
    if(media >= 7)
    	printf("Aprovado");
    else
    	printf("Reprovado");
}
