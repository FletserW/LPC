#include <stdio.h>

int main(){

    //Variables:
    int n[5], cont;

    //Commands:
    printf("Digite 5 valores: \n");
    for ( cont = 0; cont < 5; cont++)
    {
        printf("Valor %d: ",cont+1);
        scanf("%d",&n[cont]);
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Ordem Inversa:");
    for(cont = 4; cont >= 0; cont--){
        printf(" %d |",n[cont]);
    }
}