#include <stdio.h>

int main()
{
    // Variables:
    int num[10], soma = 0, sub = 0, cont;

    // Commands:
    printf("Digite 10 valores: \n");
    for (cont = 0; cont < 10; cont++)
    {
        printf("Valor %d: ", cont + 1);
        scanf("%d", &num[cont]);
        if (cont % 2 == 0)
            soma += num[cont];
        else
            sub -= num[cont];
    }
    printf("\n======= DADOS =======\n");
    printf("A soma de ");
    for (cont = 0; cont < 10; cont++)
    {
        if (cont % 2 == 0)
            printf(" %d +", num[cont]);
    }
    printf(" = %d", soma);

    printf("\nA subtracao de ");
    for (cont = 0; cont < 10; cont++)
    {
        if (cont % 2 != 0)
            printf(" %d -", num[cont]);
    }
    printf(" = %d", sub);
    
    return 0;
}
