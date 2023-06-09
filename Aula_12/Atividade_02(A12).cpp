#include <stdio.h>

int main()
{

    // Variables:
    int num[6], cont;

    // commands:
    printf("DIgite 6 valores:\n");
    for (cont = 0; cont < 6; cont++)
    {
        printf("Valor %d: ", cont + 1);
        scanf("%d", &num[cont]);
    }
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Ordem Inversa");
    for (cont = 5; cont >= 0; cont--)
    {
        printf("| %d ", num[cont]);
    }
}