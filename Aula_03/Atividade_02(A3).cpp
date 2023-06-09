#include<stdio.h>

main()
{
    //Variables:
    int n;
    //Commands:
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if((n%5==0)&&(n%3==0))
    	printf(" Divisivel por 5 e 3");
    else
    	printf(" %d nao e divisivel por 3 e 5.",n);
}