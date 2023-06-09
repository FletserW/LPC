#include <stdio.h>

int main()
{

    // Variables:
    int cont, n, par = 0, impar = 0;

    // Commands:
    printf("Informe 10 valores.\n");
    for (cont = 1; cont <= 10; cont++)
    {
        printf("Valor %d: ", cont);
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    printf("\n=-=-=-=-=-=-=-=\n");
    printf("Par: %d\nImpar: %d",par,impar);
}
