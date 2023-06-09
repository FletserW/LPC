#include<stdio.h>

main()
{
    //Variables:
    int n1,n2;
    //Commands:
    printf("Informe dois numeros inteiros:");
    printf("\nPrimeiro: ");
    scanf("%d",&n1);
    printf("Segundo: ");
    scanf("%d",&n2);
    printf("=-=-=-=-=-=-=-=--=--=-=--=-==-=-=\n");
    if(n1 == n2)
    	printf("Os numeros sao iguais.");
    else
    	printf("Os numeros %d e %d sao diferentes.",n1,n2);
}
