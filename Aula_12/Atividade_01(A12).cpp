#include <stdio.h>

int main()
{

    // Variables:
    int num[10], cont;

    // commands:
    printf("DIgite 10 valores:\n");
    for (cont = 0; cont < 10; cont++)
    {
        printf("Valor %d: ", cont + 1);
        scanf("%d", &num[cont]);
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf(" Ordem Padrao");
    for (cont = 0; cont < 10; cont++)
    {
        printf("| %d ", num[cont]);
    }
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf(" Ordem Inversa");
    for (cont = 9; cont >= 0; cont--)
    {
        printf("| %d ", num[cont]);
    }
}