#include <stdio.h>

int main()
{

    // Variables:
    int n, cont, r;

    // Commands:
    printf("Digite um valor de 1 a 10: ");
    scanf("%d", &n);
    while (n < 1 || n > 10)
    {
        printf("[ERRO] Valor invalido!!");
        printf("Informe um valor de 1 a 10:");
        scanf("%d", &n);
    }
    printf("\n### TABUADA ###\n");
    for (cont = 1; cont <= 10; cont++)
    {
        r = n * cont;
        if (cont < 10)
            printf("| %d x 0%d = %d |\n", n, cont, r);
        else
            printf("| %d x %d = %d |\n", n, cont, r);
    }
}